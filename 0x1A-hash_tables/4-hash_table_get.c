#include "hash_tables.h"

/**
 * hash_table_get - gets the corresponding value of a key
 *
 * @ht: pointer to hash_table
 * @key: key associated with value
 *
 * Return: value or NULL of key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ht_idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	ht_idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[ht_idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
