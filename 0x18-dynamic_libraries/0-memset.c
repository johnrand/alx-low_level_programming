#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first memory area of n bytes
 * to be set
 * @s:pointer to memory address block
 * @b: character to be set
 * @n: number of bytes to be set
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
