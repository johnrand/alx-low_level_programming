#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the first occurence of the character c
 * @c: character to be located
 *
 * Return: s if c is located or NULL if not
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*S == c)
		{
			return (s);
		}
		s++;
	}
	if (c != '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
