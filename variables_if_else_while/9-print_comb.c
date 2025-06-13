/*
* File: 7-print_tebahplat.c
* Auth: Your Name
* Desc: Prints all  alphabet charecters reversed , followed by a new line.
*/

#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = '0';

while (n <= '9')
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
