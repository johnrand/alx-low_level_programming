#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * puts2 - prints every character of a string starting with
 * the first character followed by a newline
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	size_t len = strlen(str);
	size_t i;

	for (i = 0; i < len; i += 2)
	{
		write(STDOUT_FILENO, &str[i], 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
