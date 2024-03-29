#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count_node = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count_node++;
	}

	return (count_node);
}
