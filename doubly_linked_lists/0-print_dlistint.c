#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t i = 0;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
i++;
}
return (i);
}
