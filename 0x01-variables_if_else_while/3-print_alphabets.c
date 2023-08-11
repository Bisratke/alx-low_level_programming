#include <stdio.h>
/*main :print alphabets in small case*/
int main(void)
{
char z = 'a';
while (z <= 'z')
{
putchar(z);
z++;
}
z = 'A';
while (z <= 'Z')
{
putchar(z);
z++;
}
putchar('\n');
return (0);
}
