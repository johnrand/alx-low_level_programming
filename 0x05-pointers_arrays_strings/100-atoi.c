#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: a pointer to the string to be converted
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}

		i++;
	}
	return (sign * result);
