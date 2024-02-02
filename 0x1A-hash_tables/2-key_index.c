#include "hash_tables.h"

/**
 * key_index - computes the index for storing key/value
 * pair
 *
 * @key: key to be stored
 * @size: Hash table size
 *
 * Return: index for storing key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ht_djb2_indx;
	unsigned long int nht_idx;

	ht_djb2_indx = hash_djb2(key);

	nht_idx = ht_djb2_indx % size;

	return (nht_idx);
}
