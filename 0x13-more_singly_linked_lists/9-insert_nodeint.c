#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: pointer to struct of head of list
 * @idx: position to add node
 * @n: integer to be added
 *
 * Return: Address of new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

/**
 * listint_len - counts number of nodes in a list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
