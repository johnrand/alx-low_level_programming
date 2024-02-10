#include <stdio.h>

/**
 * main - Entry point
 * Description: possible combination of numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;
	int first = 1; /* track if its the 1st pair */

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; ++j)
		{
			for (k = j + 1; k < 10; ++k)
			{
				if (!first)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					first = 0;
				}

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}

		}
	}

	putchar('\n');

	return (0);
}
