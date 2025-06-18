#include "main.h"

/**
 * puts_half - function
 * @str: string variable
*/

void puts_half(char *str)
{
int i = 0;
int n;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
i++;
}
n = i / 2;
while (n < i - 1)
{
_putchar(str[n]);
n++;
}

_putchar('\n');
}
