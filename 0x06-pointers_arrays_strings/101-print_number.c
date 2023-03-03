#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
int divisor = 1, digit, i;
if (n < 0) {
_putchar('-');
n = -n;
}
for (i = 0; n / divisor > 9; i++)
{
        divisor *= 10;
}
for (; divisor > 0; divisor /= 10) {
digit = (n / divisor) % 10;
_putchar(digit + '0');
}
}

