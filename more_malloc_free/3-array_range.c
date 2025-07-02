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
int *arr;
int i;
if (min > max)
return (NULL);
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);

i = 0;
while (i < max - min)
{
arr[i] = min + i;
i++;
}
return (arr);
}
