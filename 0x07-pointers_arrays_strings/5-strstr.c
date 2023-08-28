#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, c;
c = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
j = 0;
while (needle[j + c] != '\0' && haystack[i + c] != '\0'&& needle[j + c] == haystack[i + c])
{
if (haystack[i + c] != needle[j + c])
break;
c++;
}
if (needle[j + c] == '\0')
return (&haystack[i]);
j++;
}
return (NULL);
}
