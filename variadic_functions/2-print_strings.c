#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * 
*/

void print_strings(const char *separator, const unsigned int n, ...)
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
printf("%s%s", va_arg(args, char), separator);
}
else
{
printf("%s\n", va_arg(args, char));
}
i++;
}
va_end(args);
}
}
