#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 *
 * Return: On success - a pointer to the newly created array.
 *         On failure - NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
