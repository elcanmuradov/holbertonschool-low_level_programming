#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: format string indicating types of arguments
 *
 * Description: Prints arguments based on format characters:
 * c = char, i = int, f = float, s = string
 * Other characters are ignored
 */
void print_all(const char * const format, ...)
{
va_list args;
int i;
char *str, *separator;
va_start(args, format);
i = 0;
separator = "";
while (format && format[i])
{
printf("%s", separator);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
separator = ", ";
break;
case 'i':
printf("%d", va_arg(args, int));
separator = ", ";
break;
case 'f':
printf("%f", va_arg(args, double));
separator = ", ";
break;
case 's':
str = va_arg(args, char *);
if (st
printf("%s", str);
if (!str)
printf("(nil)");
separator = ", ";
break;
default:
break;
}
i++;
}
va_end(args);
printf("\n");
}
