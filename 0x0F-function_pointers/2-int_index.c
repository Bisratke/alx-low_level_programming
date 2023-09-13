#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL)
return (-1);
if (size <= 0)
return (-1);
if (cmp == NULL)
return (-1);
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
