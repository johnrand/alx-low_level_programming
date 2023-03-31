#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int len1, len2, len_res, carry, sum, i, j;
	
	len1 = strlen(n1);
	len2 = strlen(n2);
	
	if (len1 > size_r - 1 || len2 > size_r - 1)
	{
		return (0);
	}
	
	carry = 0;
	len_res = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
		}
		
		r[len_res++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	
	if (carry && len_res < size_r - 1)
	{
		r[len_res++] = carry + '0';
	}
	
	if (len_res >= size_r)
	{
		return (0);
	}
	
	r[len_res] = '\0';
	
	for (i = 0, j = len_res - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	
	return (r);
}
