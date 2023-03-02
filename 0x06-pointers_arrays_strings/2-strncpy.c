#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (j = i; j < n; i++)
{
dest[i] = '\0';
}
return dest;
}
