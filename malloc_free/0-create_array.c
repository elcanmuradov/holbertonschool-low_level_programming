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
if (arr == NULL)
{
return (NULL);
}
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
else
{
return (NULL);
}
}
