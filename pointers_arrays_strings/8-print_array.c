#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a: Array
 * @n: length of Array
*/

void print_array(int *a, int n)
{
int i = 0;
while (n > i)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
i++;
}
printf("\n");
}
