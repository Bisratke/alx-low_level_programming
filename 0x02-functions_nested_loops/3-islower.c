#include "main.h"
/**
* _islower - Return 1 if letter is lowercase, 0 if not.
* Return: 1 if lowercase, 0 if not lowercase
*/
int _islower(int x)
{
if (x > 64 && x < 91)
return (0);
else
return (1);
}
