#include <stdio.h>

/**
 * main - funct1
 * @argc: arg1
 * @argv: arg2
 * Return: 0
*/

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
