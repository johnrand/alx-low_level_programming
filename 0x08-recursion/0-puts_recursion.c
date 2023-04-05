#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a newline.
 * @s: printed string.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	/* check if string is null terminated */

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	/* prints a newline */

	else
	{
		_putchar('\n');
	}
}
