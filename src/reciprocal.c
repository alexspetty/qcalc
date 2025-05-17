// src/reciprocal.c

#include <stdio.h>
#include <gmp.h>
#include "qcalc.h"
#include <stdlib.h>

void print_reciprocal_str(const char *str) {
    mpz_t n, d;
    if (mpz_init_set_str(n, str, 10) != 0) {
        fprintf(stderr, "ERROR: Invalid integer '%s'\n", str);
        mpz_clear(n);
        return;
    }
    mpz_init_set_ui(d, 1); // Set the denominator as 1 for reciprocal calculation
    
    // Choose whether you want debug enabled or disabled here - set to 0 or 1
    int debug_enabled = 0;
    
    // Use the division print function to display the reciprocal properly
    mpz_div_print(d, n, debug_enabled);

    // Clear the variables
    mpz_clear(n);
    mpz_clear(d);
}
