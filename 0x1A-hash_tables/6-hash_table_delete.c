#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp, *next_n;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];

		while (temp)
		{
			next_n = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next_n;
		}
	}
	free(ht->array);
	free(ht);
}
