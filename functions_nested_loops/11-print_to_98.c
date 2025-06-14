#include "main.h"

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
printf("%d, ",n);
n++;
}
}
else if (n > 98)
{       
while (n != 98)
{       
printf("%d, ",n);
n--;
}
}
else
{
printf("%d",98);
}

}
