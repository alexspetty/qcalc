// src/main.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gmp.h>
#include "qcalc.h"

// Global flag for color coding
int color_enabled = 0;

// Function to get color codes based on the value
const char* get_color_code(int value) {
    switch (value) {
        case 0:
        case 9:
            return "\033[47;34m"; // Grey background, blue text (Neutral)
        case 1:
        case 5:
        case 7:
            return "\033[47;90m"; // Grey background, dark grey text (Negative form)
        case 2:
        case 4:
        case 8:
            return "\033[47;91m"; // Grey background, light red text (Positive form)
        case 3:
            return "\033[47;1;31m"; // Grey background, bold red text (Positive Pole)
        case 6:
            return "\033[47;1;30m"; // Grey background, bold black text (Negative Pole)
        default:
            return "\033[0m"; // Reset
    }
}

// Function to print a number with color (if enabled)
void print_number_with_color(int value) {
    if (color_enabled) {
        printf("%s%d\033[0m", get_color_code(value), value);
    } else {
        printf("%d", value);
    }
}

// Modify existing functions to use the new color printing function
void print_field_str_color(const char *n_str) {
    mpz_t n, i;
    mpz_init_set_str(n, n_str, 10);
    mpz_init_set_ui(i, 1);
    while (mpz_cmp(i, n) <= 0) { // Ensure inclusive up to n
        mpz_div_print(i, n);
        mpz_add_ui(i, i, 1);
    }
    mpz_clear(n);
    mpz_clear(i);
}

// Original print_field function without color
void print_field_str_no_color(const char *n_str) {
    mpz_t n, i;
    mpz_init_set_str(n, n_str, 10);
    mpz_init_set_ui(i, 1);
    while (mpz_cmp(i, n) <= 0) { // Ensure inclusive up to n
        mpz_div_print(i, n);
        mpz_add_ui(i, i, 1);
    }
    mpz_clear(n);
    mpz_clear(i);
}

int main(int argc, char *argv[]) {
    // Check for color switch
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "colorfield") == 0) {
            color_enabled = 1;
        }
    }

    // action must be specified
    if (argc < 2) {
        printf("ERROR: Specify an action with its parameters!\n");
        print_help_message();
        return 1;
    }

    // Example usage with colorfield
    if (strcmp(argv[1], "colorfield") == 0 && argc >= 3 && int_str(argv[2]) != 0) {
        print_field_str_color(argv[2]);
        return 0;
    }

    // Example usage with field
    if (strcmp(argv[1], "field") == 0 && argc >= 3 && int_str(argv[2]) != 0) {
        print_field_str_no_color(argv[2]);
        return 0;
    }

    // Handle "prime-debug" and "prime" commands
    if ((strcmp(argv[1], "prime") == 0 || strcmp(argv[1], "prime-debug") == 0) && argc >= 3 && int_str(argv[2]) != 0) {
        int detailed = 0;
        if (argc >= 4 && strcmp(argv[3], "check-full") == 0) {
            detailed = 1;
        }

        mpz_t n, half_minus_one;
        mpz_init_set_str(n, argv[2], 10);

        // Prepare strings for debug output
        char *n_str = mpz_get_str(NULL, 10, n);

        if (detailed == 0) {
            if (strcmp(argv[1], "prime-debug") == 0) {
                printf("DEBUG: Checking 1/%s for primality\n", n_str);
            }
            check_first(n);
        } else {
            // Calculate (n-1)/2
            mpz_init(half_minus_one);
            mpz_sub_ui(half_minus_one, n, 1);
            mpz_fdiv_q_ui(half_minus_one, half_minus_one, 2);
            char *half_minus_one_str = mpz_get_str(NULL, 10, half_minus_one);

            if (strcmp(argv[1], "prime-debug") == 0) {
                printf("DEBUG: Checking fractions 1/%s to %s/%s for primality\n", n_str, half_minus_one_str, n_str);
            }
            check_full(n);

            free(half_minus_one_str);
            mpz_clear(half_minus_one);
        }

        free(n_str);
        mpz_clear(n);
        return 0;
    }

    // Handle "div" command
    if (strcmp(argv[1], "div") == 0 && argc >= 4 && int_str(argv[2]) != 0 && int_str(argv[3]) != 0) {
        print_div_str(argv[2], argv[3]);
        return 0;
    }

    // Handle "rec" command
    if (strcmp(argv[1], "rec") == 0 && argc >= 3 && int_str(argv[2]) != 0) {
        print_reciprocal_str(argv[2]);
        return 0;
    }

    // Handle "fc" command
    if (strcmp(argv[1], "fc") == 0 && argc >= 3 && int_str(argv[2]) != 0) {
        print_fc_str(argv[2]);
        return 0;
    }

    // Handle "fc-prime" command
    if (strcmp(argv[1], "fc-prime") == 0 && argc >= 3 && int_str(argv[2]) != 0) {
        print_prime_str(argv[2], 1);
        return 0;
    }

    // Handle "help" and "copyright"
    if (strcmp(argv[1], "help") == 0) {
        print_help_message();
        return 0;
    }

    if (strcmp(argv[1], "copyright") == 0) {
        print_copyright_message();
        return 0;
    }

    printf("ERROR: Specify a valid action!\n");
    print_help_message();
    return 1;
}
