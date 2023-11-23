#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	int n;
	int digits;

	while (h != NULL)
	{
		n = h->n;
		digits = 1;

		if (n < 0)
		{
			_putchar('-');
			n = -n;
			nodes++;
		}
		while ((n / 10) > 0)
		{
			digits *= 10;
			n /= 10;
		}

		n = h->n;

		while (digits >= 1)
		{
			_putchar((n / digits) + '0');
			n %= digits;
			digits /= 10;
			nodes++;
		}

		_putchar('\n');
		nodes++;
		h = h->next;
	}

	return (nodes);
}
