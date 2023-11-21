#include "lists.h"

/**
 * sum_listint - sums data in the single linked
 * list
 *
 * @head: head of the list
 *
 * Return: sum of data in nodes
 */

int sum_listint(listint_t *head)
{
	int sum_of_data;
	listint_t *temp_var;

	if (head == NULL)
		return (0);

	temp_var = head;

	sum_of_data = 0;

	while (temp_var != NULL)
	{
		sum_of_data += temp_var->n;
		temp_var = temp_var->next;
	}

	return (sum_of_data);
}
