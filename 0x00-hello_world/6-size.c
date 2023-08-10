#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
float floatType;
long long int  long_long_intType;
char charType;
long int longintType;
printf("Size of a char: %zu  byte(s)\n", sizeof(charType));
printf("Size of a int: %zu  byte(s)\n", sizeof(integerType));
printf("Size of a long int: %zu  byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu  byte(s)\n", sizeof(long_long_intType));
printf("Size of a float: %zu  byte(s)\n", sizeof(floatType));
return (0);
}
