#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - funct
 * @head: arg1
 * @n: arg2
 * Return: NULL or arglist
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = new_node;
return (*head);
}
while (new_node->next != NULL)
{
new_node = new_node->next;
}
new_node->n = n;
return (new_node);
}
