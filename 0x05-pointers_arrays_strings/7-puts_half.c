#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 */
void puts_half(char *str)
{
int i;
int l;
for (i = 0; str[i] != '\0'; i++)
;
l = i;
for (l /= 2; str[l] != '\0'; l++)
{
_putchar(str[l]);
}
_putchar('\n');
}
