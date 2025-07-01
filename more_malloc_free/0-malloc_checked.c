#include "main.h"

/**
 * malloc_checked - function
 * @b: arg
 * Return: nothing
*/

void *malloc_checked(unsigned int b)
{
if (b > 0)
{
malloc(b);
return;
}
else
{
malloc(98);
return;
}
}
