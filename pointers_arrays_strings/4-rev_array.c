#include "main.h"

/**
 * reverse_array - function
 * @a: array
 * @n: length of array
 *
*/
void reverse_array(int *a, int n)
{
int b[n];
int i = 0;
while (n > 0)
{
b[i] = a[n - 1];
i++;
n--;
}
a = b;
}
