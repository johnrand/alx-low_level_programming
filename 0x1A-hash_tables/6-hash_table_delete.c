#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (ht == NULL)
	{
		return;
	}

	/* Iterate through each index in the array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		/* Free the linked list at each index */
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	/* Free the array and the hash table structure itself */
	free(ht->array);
	free(ht);
}
