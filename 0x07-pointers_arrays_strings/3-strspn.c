#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r = 0;
while (*s)
{
while (accept[r])
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
r++;
}
s++;
}
return (n);
}
