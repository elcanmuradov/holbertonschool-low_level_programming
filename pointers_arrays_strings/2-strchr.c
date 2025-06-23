#include "main.h"
/**
 * _strchr - function
 * @s: ds
 * @c: wdk
 * Return: value
*/
char *_strchr(char *s, char c)
{
int i = 0;
int a = -1;
while (s[i] != '\0')
{
if (s[i] == c)
{
a = i;
break;
}
i++;
}
if (c == '\0' && s[i] == '\0')
{
return (&s[i]);
}
if (a != -1)
{
return (&s[a]);
}
return (NULL);
}
