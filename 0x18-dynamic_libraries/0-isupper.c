#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: character to check
 * Function prototype for _isupper
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
