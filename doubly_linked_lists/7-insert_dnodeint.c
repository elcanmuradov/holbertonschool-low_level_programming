#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - funxt
 * @h: node head
 * @idx: indx
 * @n: number which added
 * Return: return
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
current = *h;
for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;
if (current == NULL)
return (NULL);
if (current->next == NULL)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = current;
new_node->next = current->next;
current->next->prev = new_node;
current->next = new_node;
return (new_node);
}
