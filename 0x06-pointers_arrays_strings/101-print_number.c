#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
    int divisor = 1, digit, i;

    /* Handle negative integers */
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    /* Determine the divisor needed to extract the leftmost digit */
    for (i = 0; n / divisor > 9; i++)
        divisor *= 10;

    /* Print each digit */
    for (; divisor > 0; divisor /= 10) {
        digit = (n / divisor) % 10;
        _putchar(digit + '0');
    }
}
