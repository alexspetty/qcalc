// include/qcalc.h

#ifndef QCALC_H
#define QCALC_H

#include <gmp.h>

// Function declarations for foundational coordinates
unsigned short int get_fc(mpz_t n, mpz_t h);
void print_fc_str(const char *str);

// Function declarations for prime checks
int prime_check(mpz_t n);
void print_prime_str(const char *str, int fc);
extern int debug_enabled;

// Check functions for the primality conditions
void check_first(mpz_t n);  // Check 1/n for primality
void check_full(mpz_t n);   // Check from 1/n to ((n-1)/2)/n

// Utility functions
int int_str(const char *str);
int reduce_to_single_digit(int sum); 
void print_copyright_message();
void print_help_message();

// Division-related functions
int mpz_pfraction_str(char **a, char **p, mpz_t n, mpz_t d);
void mpz_div_print(mpz_t n, mpz_t d, int debug_enabled); // Updated to include debug_enabled
void print_div_str(const char *n_str, const char *d_str, int debug_enabled); // Updated to include debug_enabled
void print_number_with_color(int value);
void print_field_str(const char *n_str, int debug_enabled); // Updated to include debug_enabled
void print_field_str_color(const char *n_str, int debug_enabled); // Updated to include debug_enabled
void print_field_str_no_color(const char *n_str, int debug_enabled); // Updated to include debug_enabled

// Reciprocal function
void print_reciprocal_str(const char *str);

#endif // QCALC_H