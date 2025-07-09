#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...)
{
unsigned int size= 0;
unsigned int i = 0;
char *str;

va_list args;
va_start(args, format);
str = va_arg(args, char *);
while (str[i] != '\0')
{
size++;
}
printf("%u - %u", size, i);

va_end(args);
}
