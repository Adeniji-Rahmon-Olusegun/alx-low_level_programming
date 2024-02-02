#include "hash_tables.h"

/**
 * hash_table_print - prints the elements in the hash table
 * @ht: pointer to the the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag;
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL)
		return;

	printf("{");
	flag = 0;
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;

		}
	}
	printf("}\n");
}
