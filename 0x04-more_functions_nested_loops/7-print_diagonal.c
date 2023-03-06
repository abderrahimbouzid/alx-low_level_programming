#include "main.h"
/**
 * print_diagonal - prints a diagonal line of length n in the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
