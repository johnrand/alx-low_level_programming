#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/* remove the null-terminating on the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* add th src string to dest removing the '\0' */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* add a null-terminating to the concatenated string */
	*dest = '\0';

	/* return dest */
	return (dest);
}
