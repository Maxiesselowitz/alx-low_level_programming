#include "lists.h"

/**
 * pop_listint - to delete the first node of a list
 *
 * @head: the pointer to the list
 *
 * Return: int
 */

int pop_listint(listint_t **head)

{
	int r;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	r = (*head)->next->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (r);
}
