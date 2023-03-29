#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * puts_half - prints half a string followed by a newline
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	size_t len = strlen(str);
	size_t start = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
	size_t i;

	for (i = start; i < len; i++)
	{
		write(STDOUT_FILENO, &str[i], 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
