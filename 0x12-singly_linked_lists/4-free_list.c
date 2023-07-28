#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list t
 * @head: pointer to head of linked list_t
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
