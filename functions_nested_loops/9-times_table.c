#include "main.h"
/**
 * times_table - Prints the last digit of a number.
 *
 *
 * Return: The value of the last digit.
 */
void times_table(void)
{
int i, k, a, b, c;
for (i = 0; i <= 9; i++)
{

for (k = 0; k <= 9; k++)
{
c = i * k;
a = c / 10;
b = c % 10;
if (c > 10)
{
_putchar(a + '0');
}
else if(k != 0)
{
_putchar(' ');
}
_putchar(b + '0');
if (k != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
