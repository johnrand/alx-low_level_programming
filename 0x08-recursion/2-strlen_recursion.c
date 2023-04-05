#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the length of a string.
 * @s: string which it's  length is to be returned.
 *
 * Return: 0 if length is equal to null teminate else length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
