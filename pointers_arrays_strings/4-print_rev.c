#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @s: input string to print
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}

while (i > 0)
{
_putchar(s[i - 1]);
i--;
}

_putchar('\n');

}

