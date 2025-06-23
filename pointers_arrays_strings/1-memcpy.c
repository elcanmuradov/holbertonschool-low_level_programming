#include "main.h"
/**
 * _memcpy - funcito
 * @dest: var1
 * @src: w2rf
 * @n: fsf
 * Return: 234a
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count = 0;

while (count < n)
{
dest[count] = *src;
count++;
}
return (dest);
}
