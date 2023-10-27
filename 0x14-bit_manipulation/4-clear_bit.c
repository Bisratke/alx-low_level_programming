#include "main.h"

/**
 * clear_bit - sets bit to 0 at given index
 * @n: pointer to number whose bit you want to clear
 * @index: position of bit, starting from 0
 *
 * Return: 1 on success, or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if ((sizeof(unsigned long int) * 8) <= index)
return (-1);
else
*n &= ~(1 << index);
return (1);
}
