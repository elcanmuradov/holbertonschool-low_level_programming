#include "main.h"
/**
 * most_numbers - print the numbers
 * Return: void
 *
 *
 *
*/

void most_numbers(void)
{
int i;
int b;

for (i = 0; i < 10; i++)
{
for (b = 0; b <=14; b++)
{
if (b > 10)
{
_putchar('0' + b/10)
}
_putchar('0' + b%10)
}
}
_putchar('\n');
}
