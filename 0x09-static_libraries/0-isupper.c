#include "main.h"
/**
* _isupper - Return 1 if letter is lowercase, 0 if not.
* Return: 1 if Isupper, 0 if  lowercase
* @c: The character to print
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
