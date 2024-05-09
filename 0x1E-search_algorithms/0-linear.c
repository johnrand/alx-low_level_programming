#include "search_algos.h"

/**
 * linear_search - function that uses linear search algorithm
 * @array: pointer to first element of array to search
 * @size: elements in the array
 * @value: value to search
 * Return: first index of the value else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
