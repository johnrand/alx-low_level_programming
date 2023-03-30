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
	int i;
	int j;

	i = 0;

	/* remove the null-terminating on the string */
	while (*dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	/* add th src string to dest removing the '\0' */
	while (*src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add a null-terminating to the concatenated string */
	*dest = '\0';

	/* return dest */
	return (dest);
}
