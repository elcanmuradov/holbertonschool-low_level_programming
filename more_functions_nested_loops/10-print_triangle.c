#include "main.h"
/**
 * print_triangle - draw tirangle
 * @size: triangle size
 * Return: void
 *
 *
 *
 *
*/
void print_triangle(int size)
{
int row, col, space;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
_putchar(' ');
for (col = 0; col < row; col++)
_putchar('#');
_putchar('\n');
}
}
