#include "main.h"
/**
 * print_alphabetx10 - prints the alphabet,in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
