#include "main.h"

/**
 * *rot13 - a function encode string in rot13
 * @s: pointer variabel
 * Return: Always *s when Success
 */

char *rot13(char *s)
{
int i = 0;
int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[i] != '\0')
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
i++;
}
return (s);
}
