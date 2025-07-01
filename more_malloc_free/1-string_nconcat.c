#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - funct
 * @s1: arg1
 * @s2: arg2
 * @n: arg3
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int ss1 = 0, ss2 = 0, c = 0;
char *arr;
while (s1[ss1] != '\0')
{
ss1++;
}
while (s2[ss2] != '\0')
{
ss2++;
}
if (ss2 <= n)
{
n = ss2;
}
arr = malloc(sizeof(char) * ss1 + (sizeof(char) * n) + 1);
if (arr == NULL)
{
return (NULL);
}
while (c < ss1 + n)
{
if (c < ss1)
{
arr[c] = s1[c];
}
else
{
arr[c] = s2[c - ss1];
}
c++;
}
arr[c] = '\0';
return (arr);
}
