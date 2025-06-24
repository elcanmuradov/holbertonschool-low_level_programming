#include "main.h"

/**
 * _strspn - function
 * @accept: arg1
 * @s: arg2
 * Return: count
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int c = 0;
int k = 0;
while (s[c] != '\0')
{
while (accept[k] != '\0')
{
if (accept[k] == s[c])
{
i++;
k = 0;
break;
}
}
c++;
}
return (i);
}
