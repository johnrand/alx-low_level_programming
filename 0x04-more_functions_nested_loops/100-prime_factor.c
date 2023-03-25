#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of program
 * description: prime factors
 * Return: Always 0
 */

int main(void)
{
	long int num = 612852475143;
	long int factor = 2;
	long int largest_factor = 0;

	/* Keep dividing the number by the smallest prime factor until it becomes 1 */

	while (num != 1)
	{
		if (num % factor == 0)
		{
			/* If factor is a divisor of num, check if it is prime */

			largest_factor = factor;
			while (num % factor == 0)
			{
				num /= factor;
			}
		}
		factor++;
	}

	/* Print the largest prime factor */

	printf("%ld\n", largest_factor);

	return (0);
}

