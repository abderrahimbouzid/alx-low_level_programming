#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
for (j = i + 1; j < 10; j++)
{
putchar(',');
putchar(' ');
putchar(j + '0');
for (k = j + 1; k < 10; k++)
{
putchar(',');
putchar(' ');
putchar(k + '0');
}
}
}
putchar('\n');
return (0);
}
