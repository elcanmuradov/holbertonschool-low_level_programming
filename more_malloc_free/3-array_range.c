#include "main.h"
#include <stdlib.h>

/**
 * array_range - funt
 * @min: arg1
 * @max: arg2
 * Return: NULL or array
*/

int *array_range(int min, int max)
{
if (min > max)
return (NULL);
int *arr;
int i;
arr = malloc((max - min) * sizeof(int));
if (arr == NULL)
return (NULL);

i = 0;
while (i < max - min)
{
arr[i] = min;
i++;
min++;
}
return (arr);
}
