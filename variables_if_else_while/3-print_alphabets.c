/*
* File: 3-print_alphabets.c
* Auth: Your Name
* Desc: Prints all  alphabet charecters, followed by a new line.
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

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
		while (letter <= 'Z')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);

}
