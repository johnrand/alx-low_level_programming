#include "main.h"

/**
 * print_times_table - print times table
 * @n: numbers of times table to print
 *
 * Return:Always 0 success
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);

			if (j != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
