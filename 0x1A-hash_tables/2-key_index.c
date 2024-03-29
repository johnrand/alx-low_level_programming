#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table
 * @key: The key to find the index for
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
	{
		return (0);
	}

	/* Use hash_djb2 fun to compute hash value */
	hash_value = hash_djb2(key);

	/* Calculate index using hash value and size of array */
	return (hash_value % size);
}
