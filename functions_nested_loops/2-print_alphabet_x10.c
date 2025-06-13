#include "main.h"

/**
 * print_alphabet - Prinhe alphabet in lowercase, followed by a new line.
 *
 * Description: This fups through all lowercase letters from 'a' to 'z'
 *              and prising _putchar. After printing all letters,
 *              it prints a new line character.
 */
void print_alphabet(void)
{
char letter;
int i;

i = 0;

while (i <10 )
{
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
i++;
}
