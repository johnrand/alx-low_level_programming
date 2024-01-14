#include "lists.h"

/**
 * free_dlistint - Frees the doubly linked list
 * @head: Pointer to the head of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
