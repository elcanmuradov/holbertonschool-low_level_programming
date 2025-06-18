#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a: Array
 * @n: length of Array
*/

void print_array(int *a, int n)
{
while (n - 1  >=  0)
{
printf("%d, ", a[n - 1]);
n--;
}
}
