#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the argument count
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to a new string containing all the arguments, separated by
 *         a newline character ('\n'), or NULL if an error occurs
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* compute the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_len += len;
	}

	/* allocate memory for the concatenated string */
	str = malloc((total_len + ac + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	/* concatenate the arguments */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
