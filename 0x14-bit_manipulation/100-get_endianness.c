#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int f;
char *g;
f = 1;
g = (char *)&f;
return (*g);
}
