#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - funct
 * @nmemb: arg1
 * @size: arg2
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *arr;
int i = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
arr = (char *)ptr;
while (i < nmemb)
{
arr[i] = 0;
i++;
}
return (ptr);
}
