#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n) in the list
 * @head: Pointer to the head of the list
 *
 * Return: sum of all data values or 0 if list empty
 */

int sum_dlistint(dlistint_t *head);
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
