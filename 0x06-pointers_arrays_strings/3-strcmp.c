/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: 0 if both strings are equal, negative value if s1 is less than s2,
 *         positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
if (!s1[i] && !s2[i])
{
return (0);
}
else if (!s1[i])
{
return (-s2[i]);
}
else
{
return (s1[i]);
}
}
