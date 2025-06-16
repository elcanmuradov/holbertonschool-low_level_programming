#include "main.h"
/**
 * print_line - prints a new line
 * Return:void
 * @n: number
 *
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('/n');
}
for (n; n > 0; n--)
{
_putchar('_');
}
_putchar('\n');
}
