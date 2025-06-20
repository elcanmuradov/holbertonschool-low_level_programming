#include "main.h"

/**
 * reverse_array - function
 * @a: array
 * @n: length of array
 *
*/
void reverse_array(int *a, int n)
{
int b;
int i = 0;
while (n-1 != i)
{
b = a[i];
a[i] = a[n - 1];
a[n-1] = b;
n--;
i++;
}
}
