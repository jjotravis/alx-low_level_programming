#include "lists.h"

/**
 * get_nodeint_at_index - returns node at nth position
 * @head: pointer to listint_t
 * @index: nth position of node
 *
 * Return: Node at nth position
 * Or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
