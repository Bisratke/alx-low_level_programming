#include "main.h"
/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
int i = 0;
while (c[i] != '\0')
{
if (c[i] > 96 && c[i] < 123)
{
c[i] -= 32;
}
i++;
}
return (c);
}
