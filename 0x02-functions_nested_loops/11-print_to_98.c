#include <stdio.h>
#inlude "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Description: This function prints all natural numbers from the number n
 * up to 98, separated by a comma and a space. If n is greater than 98, it
 * prints the numbers in decreasing order. If n is equal to 98, it just prints
 * 98. The function takes an integer argument and returns nothing.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i < 98; i++)
printf("%d, ", i);
}
else
{
for (i = n; i > 98; i--)
printf("%d, ", i);
}
printf("98\n");
}
