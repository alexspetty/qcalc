// src/utils.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "qcalc.h"
#include "utils.h"

int int_str(const char *str)
{
    int i;
    if (strlen(str) == 0) return 0;
    for (i = 0; str[i] != '\0'; i++)
        if (isdigit(str[i]) == 0)
            return 0;
    return 1;
}

// Function to reduce sum of digits to a single digit
int reduce_to_single_digit(int sum) {
    while (sum >= 10) {
        int new_sum = 0;
        while (sum > 0) {
            new_sum += sum % 10;
            sum /= 10;
        }
        sum = new_sum;
    }
    return sum;
}

void print_copyright_message()
{
    printf("\nqCalc [Version 2024.10.13.044]\n");
    printf("(C) Copyright 1997-2024 Alexander S. Petty .:.\n\n");
}

void print_help_message() {
    printf("Usage: qcalc <command> [options]\n");
    printf("Commands:\n");
    printf("  help                      Display this help message\n");
    printf("  copyright                 Display copyright information\n");
    printf("  field INTEGER             Display numeric field values up to a given integer\n");
    printf("  colorfield INTEGER        Display numeric field with color coding to represent polarity\n");
    printf("  div INTEGER INTEGER       Perform division and identify repeating decimals\n");
    printf("  rec INTEGER               Display reciprocal representation\n");
    printf("  fc INTEGER                Display foundational coordinates of an integer\n");
    printf("  prime INTEGER [check-first|check-full]   Check primality based on unique rules\n");
    printf("  prime-debug INTEGER [check-first|check-full]   Debug mode for detailed primality check\n");
    printf("\nOptions:\n");
    printf("  check-first               Check using the first fraction only for primality (default)\n");
    printf("  check-full                Check from 1/n to ((n-1)/2)/n for complete primality check\n");
}
