#include "main.h"
/**
 * leet - function
 * @s: string
*/
char *leet(char *s)
{
int i = 0 ;
char a[15] = "a4e3o0t7l1A4E3O0T7L1";
while (s[i] != '\0')
{
for (int k = 0; k < 15;k++)
{
if(s[i] == a[k])
{
s[i] = a[k + 1];
}
}
i++;
}
}
