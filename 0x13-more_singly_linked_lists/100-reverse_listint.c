#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t list
 * @head: pointer to the pointer to the first node
 *
 * Return: pointer to the fisrt node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (*current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
