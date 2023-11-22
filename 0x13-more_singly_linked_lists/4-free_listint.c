#include "lists.h"

/**
 * free_listint - frees a list in listint_t
 *
 * @head: a pointer at head of listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
