#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in the list
 * @h: Pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count_node = 0;

	while (current != NULL)
	{
		current = current->next;
		count_node++;
	}

	return (count_node);
}
