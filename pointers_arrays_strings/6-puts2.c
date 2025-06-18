#include "main.h"

/**
 * puts2 - function
 * @str: string variable
 *
*/


void puts2(char *str)
{
int a = 0;
int i = 0;
while (str[i] != '\0')
{
i++;
}
while (a <= i)
{
_putchar(str[a]);
a = a + 2;
}
_putchar('\n');
}
