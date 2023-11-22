#include "lists.h"

/**
 * get_nodeint_at_index - to retrieve a node at an index
 *
 * @head: the pointer to the first element
 *
 * @index: the node desired position to retrieve
 *
 * Return: the pointer to the retrieved mode
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index; c++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
