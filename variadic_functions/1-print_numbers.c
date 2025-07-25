#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
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
if (separator == NULL)
{
separator = "";
}
if (n == 0)
{
printf("\n");
}
else
{
while (i < n)
{
if (i != n - 1)
{
printf("%d%s", va_arg(args, int), separator);
}
else
{
printf("%d\n", va_arg(args, int));
}
i++;
}
va_end(args);
}
}
