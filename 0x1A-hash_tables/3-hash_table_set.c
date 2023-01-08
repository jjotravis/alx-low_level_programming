#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the haash table to update
 * @key: is the key
 * @value: value associated wih key
 *
 * Return: 1 if it succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new;
	char *temp_val;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (0);

	temp_val = strdup(value);
	if (temp_val == NULL)
		return (0);
	
	idx = key_index((unsigned char *)key, ht->size);
	/*Chexk for collision*/
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(temp_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = temp_val;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
