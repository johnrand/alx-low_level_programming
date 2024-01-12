#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given positiion
 * of a doubly linked list
 * @h:Pointer to the pointer to the head of the list
 * @idx: index where the new node is to be inserted starting at o
 * @n: Value to be added to the new node
 *
 * Return: The addres of the new node or null if it faild
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (new_node == NUL)
	{
		return (NULL);
	}
	new_node->n = n;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;
	return (new_node);
}
