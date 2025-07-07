#include "function_pointers.h"

/**
 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int result;
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
