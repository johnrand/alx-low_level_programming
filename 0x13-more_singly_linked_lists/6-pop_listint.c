#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: The head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
