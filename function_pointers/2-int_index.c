#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - funct1
 * @array: array
 * @size: size
 * @cmp: funct
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int result;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
while (i < size)
{
result = cmp(array[i]);
if (result == 1)
{
return (i);
}
i++;
}
return (-1);
}
