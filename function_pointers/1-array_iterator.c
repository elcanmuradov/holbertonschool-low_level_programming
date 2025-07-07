#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - function
 * @array: arg1
 * @size: arg2
 * @action: function1
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
while (i < size)
{
action(array[i]);
}
}
