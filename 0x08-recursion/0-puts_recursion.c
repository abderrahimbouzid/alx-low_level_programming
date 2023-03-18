#include "main.h"
/**
 * _puts_recursion - Prints a string recursively followed by a newline.
 * @s: The string to be printed.
 *
 * Return: void.
 */
int _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n'); /* Print a newline character */
return 0;
}
_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursive call with next character */
}


