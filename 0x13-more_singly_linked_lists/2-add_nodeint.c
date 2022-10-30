#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of list
 * @head: pointer to list that points to head of struct
 * @n: int to be added as a node
 *
 * Return: address of new element
 * or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
