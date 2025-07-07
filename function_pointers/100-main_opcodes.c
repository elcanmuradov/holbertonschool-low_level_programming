#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of itself
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i, n_bytes;
unsigned char *p;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

n_bytes = atoi(argv[1]);

if (n_bytes < 0)
{
printf("Error\n");
exit(2);
}

p = (unsigned char *)main;

for (i = 0; i < n_bytes; i++)
{
printf("%02x", p[i]);
if (i < n_bytes - 1)
printf(" ");
}

printf("\n");
return (0);
}
