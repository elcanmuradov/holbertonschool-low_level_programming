/*
 * File: 2-print_alphabet.c
 * Auth: Your Name
 * Desc: Prints the alphabet in lowercase, followed by a new line.
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
	putchar('\n');

	return (0);
}
