#include "main.h"
/**
 * create_array - function
 * @size: arg1
 * @c: arg2
 * Return: array or NULL
*/

char *create_array(unsigned int size, char c)
{
if (c != '\0')
{
int i = 0;
char *arr;
arr = malloc(size * sizeof(char));
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
else 
{
return ('\0');
}
}
