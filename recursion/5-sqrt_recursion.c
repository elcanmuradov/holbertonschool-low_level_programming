#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: argdfgg1
 * Return: sfsdf
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1 || n == 0)
{
return (n);
}
else
{
return (find_sqrt(n, 2));
}
}
/**
 * find_sqrt - sad
 * @a: arg1
 * @i: arg2
 * Return: return
*/
int find_sqrt(int a, int i)
{
if (i == a / 2)
{
return (-1);
}
else if (i * i == a)
{
return (i);
}
else
{
return (find_sqrt(a, i + 1));
}

