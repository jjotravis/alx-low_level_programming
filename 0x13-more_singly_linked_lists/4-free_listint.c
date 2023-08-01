#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list
 * @head: pointer to head of list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
