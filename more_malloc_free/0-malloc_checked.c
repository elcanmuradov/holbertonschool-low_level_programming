#include "main.h"

/**
 * malloc_checked - function
 * @b: arg
*/

void *malloc_checked(unsigned int b)
{
if (b > 0)
{
malloc(b);
}
else
{
malloc(98);
}
}
