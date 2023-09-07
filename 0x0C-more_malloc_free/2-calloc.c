#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *block;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
block = malloc(nmemb * size);
if (block != NULL)
{
while (i < (nmemb * size))
block[i] = 0;
i++;
return (block);
}
else
return (NULL);
}
