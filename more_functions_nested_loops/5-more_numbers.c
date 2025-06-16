#include "main.h"
/**
 * more_numbers - print the numbers
 * Return: void
 *
 *
 *
*/

void more_numbers(void)
{
int i;
int b;

for (i = 0; i < 10; i++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
_putchar('0' + b / 10);
}
_putchar('0' + b % 10);
}
_putchar('\n');
}
}
