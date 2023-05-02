#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *tmp;

	tmp = head;
	i = 0;
	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++;
		tmp = tmp->next;
		if (tmp >= head)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}
	}
	return (i);
}
