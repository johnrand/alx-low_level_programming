#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Takes no argumeants and retuns void
 *
 * Return: always (0) on succes
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
