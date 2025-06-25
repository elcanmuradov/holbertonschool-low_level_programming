#include "main.h"

/**
 * is_prime_number - asd
 * @n: arg1
 * Return: 0 or funct2
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (checkprime(n, 2));
}
}

/**
 * checkprime - funct2
 * @a: arg1
 * @i: arg2
 * Return: 0 or 1
*/
int checkprime(int a, int i)
{
if (a % i == 0)
{
return (0);
}
else if (i < a / 2)
{
return (checkprime(a, i + 1));
}
else
{
return (1);
}
}
