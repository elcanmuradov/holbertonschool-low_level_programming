#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: arg1
 * Return: array or NULL
*/

char *_strdup(char *str)
{
if (str != NULL)
{
unsigned int size = 0;
unsigned int i = 0;
char *arr;
while (str[size] != '\0')
{
size++;
}
arr = malloc((size + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
while (i <= size)
{
arr[i] = str[i];
i++;
}
return (arr);
}
else
{
return (NULL);
}
}
