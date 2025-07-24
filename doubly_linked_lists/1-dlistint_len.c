#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - prints all elements of a dlistint_t list
 * @h: pointer to head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t i = 0;
while (temp != NULL)
{
temp = temp->next;
i++;
}
return (i);
}
