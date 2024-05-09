#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element in the array
 * @size: elements in the array
 * @value: value to search
 * Return: index of the value else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, high = size - 1, low = 0, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
