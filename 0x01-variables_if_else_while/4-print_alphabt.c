#include <stdio.h>
/**
* main - main block
* Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
* Return: 0
*/
int main(void)
{
char q = 'a';
while (q <= 'z')
{
if (q != 'q' && q != 'e')
putchar(q);
q++;
}
putchar('\n');
return (0);
}
