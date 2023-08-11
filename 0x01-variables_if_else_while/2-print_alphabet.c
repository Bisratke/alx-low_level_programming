#include <stdio.h>
/*main :print alphabets in small case*/
int main(void)
{
char s = 'a';
while (s <= 'z')
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
