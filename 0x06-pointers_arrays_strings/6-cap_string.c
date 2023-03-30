#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize first letter of first word */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}

	/* Capitalize first letter of every word */
	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
				break;
			default;
				break;
		}

		i++;
	}

	return (s);
}
