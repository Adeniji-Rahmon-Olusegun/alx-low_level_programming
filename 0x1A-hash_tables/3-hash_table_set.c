#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key to be inserted
 * @value: value associated with key
 *
 * Return: 1 if success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int ht_idx;
	hash_node_t *ht_nnode;

	if (key == NULL)
		return (0);
	if (ht == NULL)
		return (0);

	ht_nnode = malloc(sizeof(hash_node_t));

	if (ht_nnode == NULL)
		return (0);

	ht_idx = key_index((const unsigned char *)key, ht->size);
	ht_nnode->key = strdup(key);
	ht_nnode->key = strdup(value);
	ht_nnode->next = NULL;

	if (ht->array[ht_idx] == NULL)
	{
		ht->array[ht_idx] = ht_nnode;
		return (1);
	}

	ht->array[0] = ht_nnode;

	return (1);
}
