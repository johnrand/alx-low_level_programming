#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Descrption: singly linked list node structure
 * for my project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_s;

int _putchar(char c);

size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
