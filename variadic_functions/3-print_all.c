#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...)
{
unsigned int size= 0;
unsigned int i = 0;

va_list args;
va_start(args, format);
while (va_arg(args,char *) != '\0')
{
size++;
}
printf("%d - %d", size, i);

va_end(args);
}
