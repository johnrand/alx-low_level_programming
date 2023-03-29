#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an integer array,
 * separated by commas and spaces, followed by a newline character
 *
 * @a: a pointer to an array of integers
 * @n: the number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
