#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current;
char *key_copy, *value_copy;
if (ht == NULL || key == NULL || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
value_copy = strdup(value);
if (value_copy == NULL)
return (0);
free(current->value);
current->value = value_copy;
return (1);
}
current = current->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
key_copy = strdup(key);
if (key_copy == NULL)
{
free(new_node);
return (0);
}
value_copy = strdup(value);
if (value_copy == NULL)
{
free(key_copy);
free(new_node);
return (0);
}
new_node->key = key_copy;
new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
