#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * list_t list.
 * @h: pointer to head of list.
 *
 * Return: number of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	/* convert count to string then print */
	if (count == 0)
	{
		_putchar('0');
	}
	else
	{
		char buffer[20];
		int i = 0;

		while (count > 0)
		{
			buffer[i++] = (count % 10) + '0';
			count /= 10;
		}
		while (i-- > 0)
		{
			_putchar(buffer[i]);
		}
	}
	_putchar('\n');

	return (count);
}
