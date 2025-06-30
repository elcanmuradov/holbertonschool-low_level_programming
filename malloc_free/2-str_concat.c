#include "main.h"
#include <stdlib.h>

/**
 * str_concat -function
 * @s1: arg2
 * @s2: arg2
 * Return: arr or null
*/

char *str_concat(char *s1, char *s2)
{
unsigned int ss1 = 0;
unsigned int ss2 = 0;
unsigned int i = 0;
char *arr;
while (s1[ss1] != '\0')
{
ss1++;
}
while (s2[ss2] != '\0')
{
ss2++;
}
arr = malloc((ss1 + ss2 + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
while (i <= ss1 + ss2)
{
if (i < ss1)
{
arr[i] = s1[i];
}
else
{
arr[i] = s2[i-ss1];
}
i++;
}
return (arr);
}
