#include "main.h"

/**
 * _puts_recursion - function
 * @s: array
*/

void _puts_recursion(char *s)
{
if (*(s + 1) != '\0' && *s != '\0')
{
_puts_recursion((s + 1));
}
else if (*s == '\0')
{
_putchar('\0');
}
_putchar('\n');
}
