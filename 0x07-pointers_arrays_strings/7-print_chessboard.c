#include "main.h"
/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int j;
while (i < 8)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
i++;
}
}
