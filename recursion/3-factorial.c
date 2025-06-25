#include "main.h"

/**
 * factorial - function
 * @n: adasd
 * Return: asd
*/

int factorial(int n)
{
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
