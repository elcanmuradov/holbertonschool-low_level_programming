#include "main.h"

/**
 * puts2 - function
 * @str: string variable
 *
*/


void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
int a = 0;
while (a <= i)
{
_putchar(str[a]);
a = a + 2;
}
}
