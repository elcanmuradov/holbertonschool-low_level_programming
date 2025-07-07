#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
char opn = argv[2];
int function;
int result;

if ((num1 >= 0 && num1 <= 9) && (num2 >= 0 && num2 <= 9))
{
if (opn == '+' || opn == '-' || opn == '*' || opn == '/' || opn == '%')
{
if((opn != '/' || opn != '%') && num2 != 0)
{
function = get_op_func(opn);
result = function(num1, num2);
printf("%d\n", result);
}
else
{
printf("Error\n");
exit(100);
}
}
else
{
printf("Error\n");
exit(99);
}
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
