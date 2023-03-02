#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_table[] = "aAeEoOtTlL";
char leet_replacements[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_table[j] != '\0'; j++)
{
if (str[i] == leet_table[j])
{
str[i] = leet_replacements[j];
break;
}
}
}
return str;
}
