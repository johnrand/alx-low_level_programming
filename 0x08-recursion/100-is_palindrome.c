#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}
	return (_palindrome_check(s, len));
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_check - checks if a string is a palindrome recursively
 * @s: the string to check
 * @len: the length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int _palindrome_check(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	if (*s != *(s + len - 1))
	{
		return (0);
	}
	return (_palindrome_check(s + 1, len - 2));
}

