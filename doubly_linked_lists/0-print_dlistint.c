#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - funct
 * Return: void or size 
 * @h: array
*/

size_t print_dlistint(const dlistint_t *h)
{
struct dlistint_t* temp = head;
int i = 0;
if (head == NULL)
{
return;
}
while (temp != NULL)
{
printf("%d/n", temp->data)
temp = temp->next;
i++;
}
printf("\n");
return (i);
}
