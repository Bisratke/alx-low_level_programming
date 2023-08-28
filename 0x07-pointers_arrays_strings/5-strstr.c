#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
haystack++;
}
return (0);
}
