#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
int i, c, l;
char h;
for (i = 0; s[i] != '\0'; i++)
;
l = i;
for (c = 0; c < l / 2; c++)
{
h = s[c];
s[c] = s[l - c - 1];
s[l - c - 1] = h;
}
}
