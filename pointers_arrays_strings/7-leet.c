#include "main.h"
/**
 * leet - function
 * @s: string
 * Return: String
*/
char *leet(char *s)
{
int i = 0;
int k = 0;

char a[20] = "a4e3o0t7l1A4E3O0T7L1";
while (s[i] != '\0')
{
while (k < 20)
{
if (s[i] == a[k])
{
s[i] = a[k + 1];
}
k++;
}
i++;
k = 0;
}
return (s);
}
