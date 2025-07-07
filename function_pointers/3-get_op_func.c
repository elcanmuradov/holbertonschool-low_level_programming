#include "3-calc.h"

/**
 * get_op_func - funct1
 * @s: funct
 * Return: function
*/
int (*get_op_func(char *s))(int, int)
{
char *ops_list = "+-*/%";
int i = 0;
while (i < 5)
{
if (ops_list[i] = s)
{
return (ops[i][1]());
}
i++;
}
}
