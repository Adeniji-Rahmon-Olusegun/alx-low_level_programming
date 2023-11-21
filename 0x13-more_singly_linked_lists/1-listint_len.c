#include "lists.h"

/**
 * listint_len - returns the length of a
 * single linked list
 *
 * @h: head of the single linked list
 *
 * Return: length/size of the single-
 * linked-list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp_var;
	size_t size_of_list;

	if (h == NULL)
		return (0);

	temp_var = h;
	size_of_list = 0;

	while (temp_var != NULL)
	{
		size_of_list++;
		temp_var = temp_var->next;
	}

	return (size_of_list);
}
