#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to listint_s structure
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (head == NULL)
		return (0);
	i = (*head)->n;
	node = (*head)->next;
	free(*head);
	(*head) = node;
	return (i);
}


