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
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	temp = NULL;
}
