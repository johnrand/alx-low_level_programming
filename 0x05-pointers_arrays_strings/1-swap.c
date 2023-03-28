#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
