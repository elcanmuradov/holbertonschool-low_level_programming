#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * You should print the key/value in the order that they appear in the array
 * Order: array, list
 * If ht is NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current;
int first = 1;

if (ht == NULL)
return;

printf("{");

for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
if (first == 0)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
first = 0;
current = current->next;
}
}

printf("}\n");
}
