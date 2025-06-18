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
printf("%d, ", a[i]);
i++;
}
}
