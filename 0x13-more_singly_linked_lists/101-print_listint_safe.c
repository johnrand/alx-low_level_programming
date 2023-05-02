#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list of integers.
 * @head: pointer to the head node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t i, j;

	if (head == NULL)
		exit(98);

	i = 0;
	ptr1 = head;

	while (ptr1 != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);

		if (ptr1 > ptr1->next)
		{
			ptr1 = ptr1->next;
			continue;
		}

		ptr2 = head;
		j = 0;

		while (j < i)
		{
			if (ptr1 == ptr2)
			{
				printf("-> [%p] %d\n", (void *)ptr1, ptr1->n);
				return (i);
			}
			j++;
			ptr2 = ptr2->next;
		}

		ptr1 = ptr1->next;
	}

	return (i);
}
