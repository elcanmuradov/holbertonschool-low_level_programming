#include "lists.h"
#include <stddef.h>

/**
 * 
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
head->prev = n;
}
