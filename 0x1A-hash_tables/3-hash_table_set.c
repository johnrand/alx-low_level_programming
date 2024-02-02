#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to hash table
 * @ht: The hash table to add/update key/value pair
 * @key: The key to add/update
 * @value: The value associated with key
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	/* Calculate index using key and hash function */
	index = key_index((const unsigned char *)key, ht->size);
	/* Check if key already exists in linked list at calculated index */
	current = ht->array[index];
	while (current)
	{ /* If key already exists, update value and return */
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	/* If key doesn't exist, create new node and add to beginning of list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
