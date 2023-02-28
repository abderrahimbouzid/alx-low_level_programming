#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
int i, j;
char temp;
i = 0;
j = 0;
while (s[j] != '\0')
{
j++;
}
j--;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
