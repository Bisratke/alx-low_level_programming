#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */
int _sqrt_recursion(int n)
{
return (t(n, 1));
}

/**
 * t - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */
int t(int c, int i)
{
int s;
s = i * i;
if (s == c)
return (i);
else if (s < c)
return (t(c, i + 1));
else
return (-1);
}
