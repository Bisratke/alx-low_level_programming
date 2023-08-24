#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @c: String of variable pointer
 * Return: String that is encoded
 */

char *leet(char *c)
{
char *cp = c;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int i = 0;
while (*c)
{
while (i < sizeof(key) / sizeof(char))
{
/*32 is the difference between lower case letters and apper case letters*/
if (*c == key[i] || *c == key[i] + 32)
{
*c = 48 + value[i];
}
i++;
}
c++;
}
return (cp);
}
