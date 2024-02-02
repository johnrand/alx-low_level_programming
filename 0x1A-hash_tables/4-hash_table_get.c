#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with key, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	/* Calculate index using the key and hash function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse linked list at calculated index */
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	/* Key couldn't be found in hash table */
	return (NULL);
}
