#include "main.h"
#include "_putchar.c"
/**
 * _puts - check the code
 * @str: the string that we will check
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
char j;
int i = 0;
while(j != '/0')
{
	_putchar(str[i]);
	i++;

}
_putchar('/n');
}
