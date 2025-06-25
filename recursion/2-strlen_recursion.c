#include "main.h"

/**
 * _strlen_recursion - function
 * @s: array
 * Return: length of s
*/

int _strlen_recursion(char *s)
{
int n;
if (*s != '\0')
{
n++;
_strlen_recursion(s+1);
}
else
{
return n;
}
}
