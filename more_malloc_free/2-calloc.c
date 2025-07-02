#include "main.h"
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
while (i < nmemb)
{
ptr[i] = 0;
i++;
}
return (ptr);
}
