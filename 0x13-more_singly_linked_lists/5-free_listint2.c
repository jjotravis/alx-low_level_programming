#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: pointer to pointer of head of a list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t **temp = head;
	listint_t *cursor;

	if (temp != NULL)
	{
		while (*head)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}
	*temp = NULL;
	}
}
