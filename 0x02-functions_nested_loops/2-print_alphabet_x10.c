#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Takes no argumeants and retuns void
 *
 * Return: always (0) on succes
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		
		_putchar('\n');
		i++;
	}

}
