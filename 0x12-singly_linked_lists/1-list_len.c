#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements in linked lists
 * @h: points to head of linked list
 *
 * Return: returns number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
