#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elemnts of a list
 * @h: points to head of list to be printed
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
