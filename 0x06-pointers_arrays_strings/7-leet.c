#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
int i;
int j = 0;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
for (i = 0; *(s + i); i++)
{
while (j <= 9)
{
if (a[j] == *(s + i))
*(s + i) = b[j];
i++;
}
}
return (s);
}
