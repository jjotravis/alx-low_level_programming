#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: Size of array(HashTable)
 *
 * Return: Pointer to newly created hash table
 * or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i = 0;
	/*hash_node_t **head;*/

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
	{
		free(new);
		new = NULL;
		return (NULL);
	}
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	new->size = size;
	return(new);
}
