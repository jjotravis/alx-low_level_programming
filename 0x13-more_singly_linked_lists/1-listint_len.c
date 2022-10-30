#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in  list
 * @h: points to the the head of a linked list
 *
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
