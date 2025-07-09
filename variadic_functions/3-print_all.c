#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - funct
 * @format: format
*/
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
char *ptr = format;
char *str;
char sep = 0;
while (ptr && *ptr)
{
if (sep && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
printf(", ");
switch (*ptr)
{
case 'c':
printf("%c", va_arg(args, int));
sep = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
sep = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
sep = 1;
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
sep = 1;
break;
}
ptr++;
}
va_end(args);
printf("\n");
}
