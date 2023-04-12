#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to a newly allocated space in memory containing the
 *         concatenated string.
 *         NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *concat_str = malloc(len1 + len2 + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	memcpy(concat_str, s1, len1);
	memcpy(concat_str + len1, s2, len2 + 1);

	return (concat_str);
}
