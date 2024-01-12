#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of node from 0
 *
 * Return: The pointer to the nth node or Null if node do not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
