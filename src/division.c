// src/division.c

#include <stdio.h>
#include <gmp.h>
#include "qcalc.h"
#include <stdlib.h>
#include <string.h>

int mpz_pfraction_str(char **a, char **p, mpz_t n, mpz_t d) {
    // Ensure that the denominator is not zero
    if (d == NULL || mpz_cmp_ui(d, 0) == 0) {
        fprintf(stderr, "ERROR: Division by zero.\n");
        return -1;
    }

    char *nr = NULL, *rp = NULL;
    int nr_len = 0, rp_len = 0;
    mpz_t q, zero;
    char buffer[2];
    mpz_t *history = NULL;
    int history_size = 0;
    int i, end = 0;

    nr = (char *)malloc(sizeof(char));
    rp = (char *)malloc(sizeof(char));
    if (nr == NULL || rp == NULL) {
        fprintf(stderr, "ERROR: Memory allocation failed.\n");
        free(nr);
        free(rp);
        return -1; // Indicate error
    }

    mpz_init(q);
    mpz_init_set_ui(zero, 0);
    history = (mpz_t *)malloc(sizeof(mpz_t));
    if (history == NULL) {
        fprintf(stderr, "ERROR: Memory allocation for history failed.\n");
        free(nr);
        free(rp);
        mpz_clear(q);
        mpz_clear(zero);
        return -1; // Indicate error
    }

    while (1) {
        mpz_init_set(history[history_size], n);
        history_size++;
        history = (mpz_t *)realloc(history, sizeof(mpz_t) * (history_size + 1));
        if (history == NULL) {
            fprintf(stderr, "ERROR: History reallocation failed.\n");
            free(nr);
            free(rp);
            for (int j = 0; j < history_size; j++) {
                mpz_clear(history[j]);
            }
            free(history);
            mpz_clear(q);
            mpz_clear(zero);
            return -1; // Indicate error
        }

        mpz_mul_ui(n, n, 10);
        mpz_tdiv_qr(q, n, n, d);
        gmp_sprintf(buffer, "%Zd", q);
        nr_len++;
        nr = (char *)realloc(nr, sizeof(char) * (nr_len + 1));
        if (nr == NULL) {
            fprintf(stderr, "ERROR: nr reallocation failed.\n");
            for (int j = 0; j < history_size; j++) {
                mpz_clear(history[j]);
            }
            free(history);
            free(rp);
            return -1; // Indicate error
        }
        nr[nr_len - 1] = buffer[0];
        
        for (i = 0; i < history_size; i++) {
            if (mpz_cmp(n, history[i]) == 0) {
                nr[nr_len] = '\0';
                rp = (char *)realloc(rp, sizeof(char) * (nr_len - i + 1));
                if (rp == NULL) {
                    fprintf(stderr, "ERROR: rp reallocation failed.\n");
                    for (int j = 0; j < history_size; j++) {
                        mpz_clear(history[j]);
                    }
                    free(history);
                    free(nr);
                    return -1; // Indicate error
                }

                strcpy(rp, nr + i);
                rp_len = nr_len - i;
                nr[i] = '\0';
                nr = (char *)realloc(nr, sizeof(char) * (i + 1));
                nr_len = i;
                end = 1;
                break;
            }
        }

        if (end != 0) break;
        if (mpz_cmp(n, zero) == 0) {
            nr[nr_len] = '\0';
            rp[rp_len] = '\0';
            break;
        }
    }

    // Clean up memory used by history
    for (int j = 0; j < history_size; j++) {
        mpz_clear(history[j]);
    }
    free(history);
    mpz_clear(q);
    mpz_clear(zero);

    *a = nr;
    *p = rp;

    if (rp_len == 0)
        return 0;
    else if (nr_len > 0)
        return 1;
    else
        return 2;
}

void mpz_div_print(mpz_t n, mpz_t d) {
    mpz_t q, r, zero;
    char *a, *p;
    int type;

    mpz_init(q);
    mpz_init(r);
    mpz_tdiv_qr(q, r, n, d);
    
    // Print the quotient with color (if enabled)
    int q_value = mpz_get_ui(q);
    print_number_with_color(q_value);

    mpz_clear(q);
    mpz_init_set_ui(zero, 0);

    if (mpz_cmp(r, zero) != 0) {
        printf(".");

        // Expand proper fraction r/d
        type = mpz_pfraction_str(&a, &p, r, d);

        // Print antiperiod if any
        if (type != 2) {
            for (int i = 0; a[i] != '\0'; i++) {
                print_number_with_color(a[i] - '0'); // Convert character to integer
            }
        }

        // Print period if any
        if (type != 0) {
            printf("|");
            for (int i = 0; p[i] != '\0'; i++) {
                print_number_with_color(p[i] - '0'); // Convert character to integer
            }
            printf("|");
        }

        free(a);
        free(p);
    }

    printf("\n");
    mpz_clear(zero);
    mpz_clear(r);
}

void print_div_str(const char *n_str, const char *d_str)
{
    mpz_t n, d;
    mpz_init_set_str(n, n_str, 10);
    mpz_init_set_str(d, d_str, 10);
    mpz_div_print(n, d);
    mpz_clear(n);
    mpz_clear(d);
}

void print_field_str(const char *n_str)
{
    mpz_t n, i;
    mpz_init_set_str(n, n_str, 10);
    mpz_init_set_ui(i, 1);
    while (mpz_cmp(i, n) != 0)
    {
        mpz_div_print(i, n);
        mpz_add_ui(i, i, 1);
    }
    mpz_clear(n);
    mpz_clear(i);
}
