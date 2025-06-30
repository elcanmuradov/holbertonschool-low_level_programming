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
if (size != 0)
{
unsigned int i = 0;
char *arr;
arr = malloc(size * sizeof(char));
while (i < size)
{
arr[i] = c;
i++;
}
}
if (size == 0 || arr = NULL)
{
return (NULL);
}
else
{
return (arr);
}
}
