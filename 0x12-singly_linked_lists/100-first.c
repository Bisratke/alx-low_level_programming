#include <stdio.h>
#include "lists.h"

void fun(void) __attribute__((constructor));
/**
 * fun- function with constructor
 *
 * Description: print string
 * Return: na
 */
void fun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
