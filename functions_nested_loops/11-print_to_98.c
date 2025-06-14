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
for (n;n <= 98;n++)
{
printf("%d, ",n);
}
}
else if (n > 98)
{
for (n;n >= 98; n--)
{
printf("%d, ",n);
}
}
else
{
printf("%d",98);
}
}
