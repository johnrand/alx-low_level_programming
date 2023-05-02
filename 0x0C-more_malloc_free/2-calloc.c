#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * of nmemb elements of size bytes each.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: If successful - a pointer to the allocated memory.
 *         If fails - NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory = NULL;
	unsigned int i;
	char *filler;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}

	filler = memory;
	for (i = 0; i < (nmemb * size); i++)
	{
		filler[i] = 0;
	}

	return (memory);
}
