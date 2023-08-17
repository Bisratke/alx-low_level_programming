#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int x)
{
if (x > 64 && x < 91)
return (1);

return (0);
}
