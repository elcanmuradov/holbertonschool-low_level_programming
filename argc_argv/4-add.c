#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 if successful, 1 if error occurs
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
char *arg;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
arg = argv[i];

for (j = 0; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}

printf("%d\n", sum);
return (0);
}
