#include "3-calc.h"

/**
 * get_op_func - should contain the function that selects the correct
 * function to perform the operation asked by the use
 * @s: struct s (int, int)
 * Return: NULL
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
for (i = 0; i < 5; i++)
{
if (ops[i].op[0] == s[0])
return (ops[i].f);
}
return (NULL);
}
