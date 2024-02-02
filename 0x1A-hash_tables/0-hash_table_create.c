#include "hash_tables.h"

/**
 * hash_table_create - creates an hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to the created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *nh_table;

	if (size == 0)
	{
		return (NULL);
	}

	nh_table = malloc(sizeof(hash_table_t));

	if (nh_table == NULL)
		return (NULL);

	nh_table->size = size;

	nh_table->array = malloc(sizeof(hash_table_t *) * size);
	if (nh_table->array == NULL)
	{
		free(nh_table->array);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
	{
		nh_table->array[idx] = NULL;
	}

	return (nh_table);
}
