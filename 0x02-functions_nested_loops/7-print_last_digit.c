#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    /* get the absolute value of n */
    if (n < 0)
    {
        n = -n;
    }

    /* get the last digit */
    last_digit = n % 10;

    /* print the last digit */
    _putchar('0' + last_digit);

    /* return the value of the last digit */
    return (last_digit);
}
