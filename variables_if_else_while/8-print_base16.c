/*
* File: 7-print_tebahplat.c
* Auth: Your Name
* Desc: Prints all  alphabet charecters reversed , followed by a new line.
*/

#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
int a;

a = 0;
while (a <= 9)
{
printf("%d",a);
a++;
}
letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);

}
