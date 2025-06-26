#include <stdio.h>

/**
 * main - funct
 * @argv: arg1
 * @argc: arg2
 * Return: 0
*/
int main(int argc, char *argv[])
{
if (argc - 1 == 2)
{
int mul = argv[1] * argv[2];

printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
