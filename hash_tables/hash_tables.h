#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key (unique string)
 * @value: The value associated with the key
 * @next: Pointer to the next node in case of collision
 */
typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of pointers to hash_node_t
 */
typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);



#endif /* HASH_TABLES_H */
