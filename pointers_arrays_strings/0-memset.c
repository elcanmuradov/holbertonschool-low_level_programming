#include "main.h"

/**
 * _memset - fuhnc
 * @s: var1
 * @b: var2
 * @n: var3
 * Return: s array
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int count = 0;
while (count <= n)
{
s[count] = b;
count++;
}
return (s);
}

