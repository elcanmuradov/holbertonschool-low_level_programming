#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - funct
 * @argc: void
 * @argv: arg1
 * Return: wodfkpwd
*/

int main(int argc, char *argv[])
{
int num1, num2, result;
char *opn;
int (*function)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(97);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
opn = argv[2];

if (!(strcmp(opn, "+") == 0 || strcmp(opn, "-") == 0 ||
strcmp(opn, "*") == 0 || strcmp(opn, "/") == 0 || strcmp(opn, "%") == 0))
{
printf("Error\n");
exit(99);
}

if ((strcmp(opn, "/") == 0 || strcmp(opn, "%") == 0) && num2 == 0)
{
printf("Error\n");
exit(100);
}

function = get_op_func(opn);
result = function(num1, num2);
printf("%d\n", result);

return (0);
}
