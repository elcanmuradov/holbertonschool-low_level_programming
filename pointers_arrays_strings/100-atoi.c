#include "main.h"

/**
 * _atoi - function
 * @s: adsa
 * Return: adas
 *
*/


int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit_seen = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
else if (*s >= '0' && *s <= '9')
{
digit_seen = 1;
if (result > INT_MAX / 10 ||
(result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
result = result * 10 + (*s - '0');
}
else if (digit_seen)
break;
s++;
}
return (digit_seen ? result *sign : 0);
}
