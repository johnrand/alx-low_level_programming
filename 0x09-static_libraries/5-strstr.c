#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to beginning of located substring or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		start = haystack;
		search = needle;

		while (*search && *haystack == *search)
		{
			haystack++;
			search++;
		}

		if (*search == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}

