#include "main.h"
/**
 * main - chek number greater than zero or lessthan or equal
 * Return :0 succes
 */
void positive_or_negative(int i)
{
if(i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
return;
}
