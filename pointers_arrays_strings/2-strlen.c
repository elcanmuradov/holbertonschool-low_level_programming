#include "main.h"
#include <string.h>
/**
 * _strlen - define length of s
 * @s: char array
 * Return: length of s
 *
*/




int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return (count);
}
