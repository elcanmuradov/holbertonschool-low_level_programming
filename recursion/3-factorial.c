#include "main.h"

/**
 * factorial - function
 * @n: adasd
 * Return: asd
*/

int factorial(int n)
{
if (n == 1 || n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
