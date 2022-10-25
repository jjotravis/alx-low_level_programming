#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: points to head of linked list
 * Return: number of node in list
 */
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		node++;
	}
	return (node);
}
