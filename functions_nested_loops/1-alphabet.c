/**
 * main - Entry point
 * Description: Prints "_putchar" followed by a new line.
 * Return: Always 0 (Success)
 */
#include "main.h"

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
