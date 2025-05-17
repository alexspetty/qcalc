// src/fc.c

#include <stdio.h>
#include <gmp.h>
#include "qcalc.h"

unsigned short int get_fc(mpz_t n, mpz_t h)
{
    unsigned short int r, s;
    r = (unsigned short int)mpz_cdiv_q_ui(h, n, 9);
    if (r == 0) s = 0;
    else s = (unsigned short int)(((9 - r) * 10) / 9);
    return s;
}

void print_fc_str(const char *str)
{
    mpz_t n, height;
    unsigned short int shadow;
    if (mpz_init_set_str(n, str, 10) != 0) {
        fprintf(stderr, "ERROR: Invalid integer '%s'\n", str);
        mpz_clear(n);
        return;
    }
    mpz_init(height);
    shadow = get_fc(n, height);
    gmp_printf("n: %Zd\n", n);
    gmp_printf("height: %Zd\n", height);
    gmp_printf("shadow: %d\n", shadow);
    mpz_clear(n);
    mpz_clear(height);
}
