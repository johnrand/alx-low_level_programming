#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, j, k, word_len;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			str++;
			continue;
		}

		word_len = 0;
		while (str[word_len] != ' ' && str[word_len] != '\t' &&
				str[word_len] != '\n' && str[word_len] != '\0')
		{
			word_len++;
		}

		words[i] = malloc(sizeof(char) * (word_len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++)
		{
			words[i][j] = str[j];
		}
		words[i][j] = '\0';

		i++;
		str += word_len;
	}
	words[i] = NULL;
	return (words);
}
