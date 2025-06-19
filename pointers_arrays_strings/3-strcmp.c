#include "main.h"
/**
 * _strcmp - sdofsf
 * @s1: ofkwoef
 * @s2: sdfsf
 * Return: wfwf
*/


int _strcmp(char *s1, char *s2)
{

int i = 0;
int r = 0;

while (s1[i] != '\0')
{
r = r + s1[i] - s2[i];
i++;
}
return (r);
}

