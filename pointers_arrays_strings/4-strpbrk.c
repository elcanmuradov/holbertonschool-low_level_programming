#include "main.h"

/**
 * _strspn - function
 * @accept: arg1
 * @s: arg2
 * Return: count
*/
char *_strpbrk(char *s, char *accept)
{
int c = 0;
int k = 0;
while (s[c] != '\0')
{
while (accept[k] != '\0')
{
if (accept[k] == s[c])
{
return (accept[k]);
}
k++;
}
c++;
}
}
