/*
* File :  5-print_numbers;
* Desc :  Print the all numbers
*/
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit;

digit = 0;

while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
