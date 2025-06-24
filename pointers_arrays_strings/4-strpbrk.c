#include "main.h"

/**
 * _strpbrk - function
 * @accept: arg1
 * @s: arg2
 * Return: count
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int k = 0;
while (s[i] != '\0')
{
while (accept[k] != '\0')
{
if (s[i] == accept[k])
{
return accept[k];
}
k++;
}
i++;
}
return '\0';
}
