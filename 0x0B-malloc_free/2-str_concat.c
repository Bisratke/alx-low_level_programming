#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
char *strout;
unsigned int i = 0, j, k, limit;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
;
for (j = 0; s2[j] != '\0'; j++)
;
strout = malloc(sizeof(char) * (i + j + 1));
if (strout == NULL)
{
free(strout);
return (NULL);
}
for (k = 0; k < i; k++)
strout[k] = s1[k];
limit = j;
for (j = 0; j <= limit; k++, j++)
strout[k] = s2[j];
return (strout);
}
