#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (int k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
