#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first memory area of n bytes
 * @s: pointer to a starting address of memory block 
 * to be set
 * @b: character to be set
 * @n: number of bytes to be set
 * 
 * return: s
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
