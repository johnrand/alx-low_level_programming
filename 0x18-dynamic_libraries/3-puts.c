#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - prints a string followed by a newline
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	size_t len = strlen(str);

	write(STDOUT_FILENO, str, len);
	write(STDOUT_FILENO, "\n", 1);
}

