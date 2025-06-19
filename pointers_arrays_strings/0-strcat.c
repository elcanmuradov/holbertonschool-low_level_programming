
#include "main.h"

/**
 * _strcat - İki stringi birləşdirir (concatenation).
 * @dest: Nəticna src əlavə ediləcək)
 * @src: Əlavə ediləcək string
 *
 * Return: dest-in göstəricisi (pointer)
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return dest;
}

