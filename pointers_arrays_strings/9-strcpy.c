#include "main.h"
/**
 * _strcpy - function
 * @dest: ldaldk
 * @src: sdfsdf
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
