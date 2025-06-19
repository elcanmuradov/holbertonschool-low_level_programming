#include "main.h"

/**
 * _strncat - İki stringi birləşdirir (concatenation).
 * @dest: Nəticə stringi (əvvəlində olan, sonuk)
 * @src: Əlavə ediləcək string
 * @n: eded
 * Return: dest-in göstəricisi (pointer)
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
    
while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
