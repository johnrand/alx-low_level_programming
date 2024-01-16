#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function that copies the content of dest to src
 * @dest: pointer to character
 * @src: charater to be copied
 * @n: number of bytes to set
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
