#include "main.h"
#include <stdlib.h>

/**
 *
*/

int *array_range(int min, int max)
{
if (min > max)
return (NULL);
int *arr;
unsigned int i;
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
