#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - funct
 * Return: void or size 
 * @h: array
*/

size_t print_dlistint(const dlistint_t *h)
{
struct dlistint_t* temp = h;
int i = 0;
while (temp != NULL)
{
printf("%d/n", temp->data);
temp = temp->next;
i++;
}
return (i);
}
