#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print the numbers
 * @separator: sep
 * @n: count
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
va_start(args, n);

while (i < n)
{
printf("%d%c", va_arg(args, int), separator);
}
va_end(args);
}
