#include "main.h"

/**
 * _puts_recursion - function
 * @s: array
*/

void _puts_recursion(char *s)
{
_putchar(*s);
if (*(s + 1) != '\0')
{
_puts_recursion((s + 1));
}
_putchar('\n');
}
