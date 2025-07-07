#include "function_pointers.h"

/**
 * print_name - funct
 * @name: arg1
 * @f: funct1
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
