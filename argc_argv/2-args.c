#include <stdio.h>

/**
 * main - funct1
 * @argc: arg1
 * @argv: arg2
 * Return: 0
*/

int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s/n", argv[i]);
}
return 0;
}
