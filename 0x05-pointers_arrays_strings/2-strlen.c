#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: integer.
 */
int _strlen(char *s)
{
int i = 1;
char j = s[0];
while (j != '\0')
{
j = s[i];
i++;
}
int j = i - 1;
return j;
}
