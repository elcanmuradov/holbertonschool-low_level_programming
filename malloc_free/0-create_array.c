#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: arg1
 * @c: arg2
 * Return: array or NULL
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *arr;
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
unsigned int i = 0;
while (i < size)
{
arr[i] = c;
}
return (arr);
}
