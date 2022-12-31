#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = head->next;

	free(head);
	head = next;
}
