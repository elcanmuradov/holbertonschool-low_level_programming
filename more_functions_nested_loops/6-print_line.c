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
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
