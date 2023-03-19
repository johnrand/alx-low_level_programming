#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Displaying size of various types
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(li));
	printf("Size of a long long int: %lu\n", sizeof(lli));
	printf("Size of a float: %lu\n", sizeof(f));

	return (0);
}
