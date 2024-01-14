#include <stdio.h>

int is_palindrome(int number);

/**
 * is_palindrome - function to determine if a number is palindrome
 * number: the number
 *
 * Return: an integer
 */

int is_palindrome(int number)
{
	int reverse = 0;
	int original = number;

	while (number > 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}

	return (original == reverse);
}

/**
 * main - Entry point
 * Description: Findthe largest palindrome made from the product
 * of two 3-digit numbers and save result in the file 102-result
 *
 * Return: Always (0) success
 */

int main(void)
{
	int largest_palindrome = 0;
	int i, j, product;
	FILE *file;

	for (i = 100; i < 1000; ++i)
	{
		for (j = 100; j < 1000; ++j)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}

	file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", largest_palindrome);
		fclose(file);
	}

	return (0);
}
