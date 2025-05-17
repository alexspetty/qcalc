// src/prime.c

#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include "qcalc.h"  // Assuming this header has necessary declarations

// Global flag for debugging
int debug_enabled = 0;

// Function to check if a number is primordial
int is_primordial(mpz_t n) {
    return (mpz_cmp_ui(n, 1) == 0 || mpz_cmp_ui(n, 2) == 0 || mpz_cmp_ui(n, 5) == 0);
}

// Check only the first fraction 1/n
void check_first(mpz_t n) {
    if (is_primordial(n) || mpz_even_p(n)) {
        printf("not a prime\n");
        return;
    }

    mpz_t one;
    mpz_init_set_ui(one, 1);

    char *repeating_part = NULL;
    char *terminating_part = NULL;
    int type = mpz_pfraction_str(&repeating_part, &terminating_part, one, n);

    if (type == -1 || type == 0 || repeating_part == NULL) {
        printf("not a prime\n");
    } else {
        int sum = 0;
        for (int j = 0; repeating_part[j] != '\0'; j++) {
            if (repeating_part[j] >= '0' && repeating_part[j] <= '9') {
                sum += repeating_part[j] - '0';
            }
        }
        int reduced_sum = sum % 9;

        if (reduced_sum == 9 || reduced_sum == 0) {
            printf("prime\n");
        } else {
            printf("not a prime\n");
        }
    }

    free(repeating_part);
    free(terminating_part);
    mpz_clear(one);
}

// Check all fractions from 1/n to ((n-1)/2)/n
void check_full(mpz_t n) {
    if (is_primordial(n) || mpz_even_p(n)) {
        printf("not a prime\n");
        return;
    }

    mpz_t i, half_n;
    mpz_init_set_ui(i, 1);
    mpz_init(half_n);
    mpz_fdiv_q_ui(half_n, n, 2);

    char *repeating_part = NULL;
    char *terminating_part = NULL;
    int is_prime = 1;  // Assume prime until proven otherwise

    while (mpz_cmp(i, half_n) <= 0) {
        int type = mpz_pfraction_str(&repeating_part, &terminating_part, i, n);

        char *i_str = mpz_get_str(NULL, 10, i);
        if (debug_enabled) {
            printf("DEBUG: Checking fraction %s/%s\n", i_str, mpz_get_str(NULL, 10, n));
        }

        if (type == -1 || type == 0 || repeating_part == NULL) {
            if (debug_enabled) {
                printf("DEBUG: Terminating or invalid cycle for %s/%s. Not considered prime based on this row.\n", i_str, mpz_get_str(NULL, 10, n));
            }
            free(repeating_part);
            free(terminating_part);
            mpz_add_ui(i, i, 1);
            free(i_str);
            continue;
        }

        if (debug_enabled) {
            printf("DEBUG: Repeating part of %s/%s: %s\n", i_str, mpz_get_str(NULL, 10, n), repeating_part);
        }

        int sum = 0;
        for (int j = 0; repeating_part[j] != '\0'; j++) {
            if (repeating_part[j] >= '0' && repeating_part[j] <= '9') {
                sum += repeating_part[j] - '0';
            }
        }
        int reduced_sum = sum % 9;

        if (debug_enabled) {
            printf("DEBUG: Sum of digits in repeating part: %d\n", sum);
            printf("DEBUG: Reduced sum of digits: %d\n", reduced_sum);
        }

        if (reduced_sum != 9 && reduced_sum != 0) {
            if (debug_enabled) {
                printf("DEBUG: Reduced sum is neither 9 nor 0 for %s/%s. Not a prime.\n", i_str, mpz_get_str(NULL, 10, n));
            }
            is_prime = 0;
            free(i_str);
            free(repeating_part);
            free(terminating_part);
            break;
        }

        free(i_str);
        free(repeating_part);
        free(terminating_part);
        mpz_add_ui(i, i, 1);  // Prepare for the next fraction
    }

    mpz_clear(i);
    mpz_clear(half_n);

    if (is_prime) {
        printf("prime\n");
    } else {
        printf("not a prime\n");
    }
}

// Custom primality check incorporating primordial and radial checks
int prime_check(mpz_t n) {
    // Early exit for primordial numbers or evens
    if (is_primordial(n) || mpz_even_p(n)) return 0;

    // Check n % 9 to rule out numbers on 3, 6, or 9 radial
    unsigned long remainder = mpz_fdiv_ui(n, 9);
    if (remainder == 0 || remainder == 3 || remainder == 6) {
        if (debug_enabled) {
            printf("DEBUG: %s is on 3, 6, or 9 radial. Not a prime.\n", mpz_get_str(NULL, 10, n));
        }
        return 0;
    }

    check_full(n);  // Use check_full to verify if n is prime via complete fraction checks
    return 1; // If previous checks passed, return prime status
}

// Wrapper function for prime checks with optional foundational coordinates
void print_prime_str(const char *str, int fc) {
    mpz_t n;
    mpz_init_set_str(n, str, 10);
    prime_check(n);
    mpz_clear(n);
}

// Debug wrapper
void print_prime_debug_str(const char *str, int fc) {
    debug_enabled = 1;
    print_prime_str(str, fc);
    debug_enabled = 0;
}
