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
int r;

while (s1[i] != '\0' && s2[i] != '\0' &&  s1[i] == s2[i])
{
i++;
}
r = s1[i] - s2[i];
return (r);
}

