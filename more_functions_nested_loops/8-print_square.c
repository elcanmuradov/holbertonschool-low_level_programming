#include"main.h"
/**
 * print_square - draw the square
 * @size: define the square size
 * Return: void
 *
 *
*/

void print_square(int size)
{
int row,col;
if(size <= 0)
{
_putchar('\n');
return;
}
for(row = 0; row < size; row++)
{
for(col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}

