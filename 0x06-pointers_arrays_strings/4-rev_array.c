#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements of the array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int jnr;

	for (i = 0; i < n / 2; i++)
	{
		jnr = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = jnr;
	}
}
