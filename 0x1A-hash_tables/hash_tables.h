#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hah_node_s - Node oaf a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to the key
 * @next: a pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_tables_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An arra of size @size
 * Each cell of this array is apointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
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

#endif
