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
for (i; i > 0; i--)
{
_putchar(s[i - 1]);
}
}
_putchar('\n');

}

