#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_res, carry, sum;
	int i, j, k;

	len1 = 0;
	while (n1[len1] != '\0')
		len1++;

	len2 = 0;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	carry = 0;
	len_res = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (len_res >= size_r - 1)
			return (0);

		r[len_res] = sum % 10 + '0';
		len_res++;
		carry = sum / 10;
	}

	if (carry != 0)
	{
		if (len_res >= size_r - 1)
			return (0);

		r[len_res] = carry + '0';
		len_res++;
	}

	r[len_res] = '\0';

	for (i = 0, k = len_res - 1; i < k; i++, k--)
	{
		char tmp = r[i];
		r[i] = r[k];
		r[k] = tmp;
	}

	return (r);
}

