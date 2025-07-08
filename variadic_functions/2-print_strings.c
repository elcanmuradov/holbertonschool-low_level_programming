#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - funct
 * @separator: sep
 * @n: count
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *str;
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
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != n - 1)
printf("%s", separator);
i++;
}
printf("\n");
}
}
