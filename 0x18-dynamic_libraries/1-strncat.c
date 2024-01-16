#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings up to n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* advance ptr to the end of dest */

	while (*ptr)
	{
		ptr++;
	}

	/* append up to n bytes from src to dest */

	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* add terminating null byte */

	*ptr = '\0';
	return (dest);
}
