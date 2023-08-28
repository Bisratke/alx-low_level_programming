#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int c;
i = 0;
c = 0;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
c++;
break;
}
j++;
}
if (accept[j] == '\0')
break;
}
return (c);
}
