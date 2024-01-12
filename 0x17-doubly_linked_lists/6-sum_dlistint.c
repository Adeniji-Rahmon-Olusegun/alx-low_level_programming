#include "lists.h"

/**
 * sum_dlistint - sums all the data (n)
 *
 * @head: pointer to the first node in the
 * double linked list.
 *
 * Return: sum of all data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp_var;
	int sum_of_dll_data = 0;

	if (head == NULL)
		return (sum_of_dll_data);

	temp_var = head;

	while (temp_var != NULL)
	{
		sum_of_dll_data += temp_var->n;
		temp_var = temp_var->next;
	}

	return (sum_of_dll_data);
}
