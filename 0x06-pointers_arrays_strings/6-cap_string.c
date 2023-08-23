#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
int i = 0;
int c;
int g = 0;
char nots[] = ",;.!?(){}\n\t\" ";

while (str[i] != '\0')
{
if (str[0] > 96 && str[0] < 123)
g = 1;
while (nots[c] != '\0')
{
if (nots[c] == str[i])
g = 1;
c++;
}
if (g)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] -= 32;
g = 0;
}
else if (str[i] > 64 && str[i] < 91)
g = 0;
else if (str[i] > 47 && str[i] < 58)
g = 0;
}
i++;
}
return (str);
}
