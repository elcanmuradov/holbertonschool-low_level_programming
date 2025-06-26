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
printf("%d\n", argv[1] * argv[2]);
}
else
{
printf("Error\n");
}
return (0);
}
