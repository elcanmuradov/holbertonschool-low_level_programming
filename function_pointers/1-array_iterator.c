#include "function_pointers"

/**
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
while (i < size)
{
action(array[i]);
}
}
