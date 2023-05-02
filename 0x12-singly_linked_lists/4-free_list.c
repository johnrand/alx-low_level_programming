#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to head of list
 *
 * Return: void
 */


void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);
		free(current);
		current = next;
	}
}
