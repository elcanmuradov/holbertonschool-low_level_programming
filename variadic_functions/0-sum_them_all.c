#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - funct
 * @n: arg
 * Return: count
*/

int sum_them_all(const unsigned int n, ...)
{
int c = 0;
unsigned int i = 0;
va_list args;

va_start(args, n);
while (i < n)
{
c += va_arg(args, int);
i++;
}
va_end(args);
return (c);
}
