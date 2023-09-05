#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *create_array(unsigned int size, char c)
{
char *r;
unsigned int i;
if (size == 0)
return (NULL);
r = malloc(sizeof(c) * size);
if (r == NULL)
return (NULL);
for (i = 0; i < size; i++)
r[i] = c;
return (r);
}
