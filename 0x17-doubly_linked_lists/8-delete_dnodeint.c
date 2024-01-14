#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position
 * in the doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of node to be deleted
 *
 * Return: 1 if succeeded else -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	free(current);

	return (1);
}
