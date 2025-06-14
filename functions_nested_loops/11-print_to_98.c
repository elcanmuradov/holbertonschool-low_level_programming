#include "main.h"
#include <stdio.h>
/* print_to_98 - print the numbers to 98.
 * @n: The number.
 *
 * Return: The sum of the two integers.
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n != 98)
{
_putchar('0' + n/10);
_putchar('0' + n%10);
_putchar(',');
_putchar(' ');
n++;
}
_putchar('9');
_putchar('8');
}
else if (n > 98)
{
while (n != 98)
{
_putchar('0' + n/10);
_putchar('0' + n%10);
_putchar(',');
_putchar(' ');
n--;
}
_putchar('9');
_putchar('8');
}
else
{
_putchar('9');
_putchar('8');
}

}
