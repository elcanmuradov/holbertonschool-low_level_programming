#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
int i;
char seps[] = " \t\n,;.!?\"(){}";
for (i = 0; seps[i] != '\0'; i++)
{
if (c == seps[i])
return (1);
}
return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i;
if (str[0] >= 'a' && str[0] <= 'z')
str[0] = str[0] - ('a' - 'A');

for (i = 1; str[i] != '\0'; i++)
{
if (is_separator(str[i - 1]) &&
(str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - ('a' - 'A');
}
}
return (str);
}

