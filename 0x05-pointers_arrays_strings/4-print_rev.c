#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to a character string,
 *
 * Return: void
 */

void print_rev(char *s)
{
	size_t len = strlen(s);
	int i;

	for(i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

