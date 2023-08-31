#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - converts a binary number to an unsigned
 * int.
 *
 * @b: string containing binary number.
 *
 * Return: unsigned int value of binary number or 0 if b
 * contains non-binary chars.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0' ; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		decimal = decimal * 2 + (*b - '0');
	}

	return (decimal);
}
