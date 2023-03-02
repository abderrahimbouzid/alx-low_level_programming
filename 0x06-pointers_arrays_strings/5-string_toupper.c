/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
char *p = str;
while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z')
{*p = *p - 32;
}
p++;
}
return str;
}
