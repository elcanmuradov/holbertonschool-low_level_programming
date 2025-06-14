#include "main.h"
#include <stdio.h>

/**
 * add - Prints the 9 times table, starting with 0.
 *
 * Description: This functilication table for 9 in a formatted manner.
 */

int add(int a ,int b)
{
int c = a + b;
_putchar('0' + c/10);
_putchar('0' + c%10);
}
_putchar('\n');
