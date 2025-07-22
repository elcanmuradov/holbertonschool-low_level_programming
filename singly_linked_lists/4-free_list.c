#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the first node of the list
 *
 * Description: Each node's string and the node itself are freed
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
if (temp->str != NULL)
{
free(temp->str);
}
free(temp);
}
}
