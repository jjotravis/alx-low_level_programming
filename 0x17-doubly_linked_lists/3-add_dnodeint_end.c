#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to head of the list
 * @n: integer to be added
 *
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new_node;
	new_node->prev = *head;

	return (new_node);
}
