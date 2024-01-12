#include "lists.h"

/**
 * dlistint_len - obtains the length of a doubly
 * linked list.
 *
 * @h: head of the list
 *
 * Return: The length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_ndll;
	dlistint_t const *temp_var;

	count_ndll = 0;
	temp_var = h;

	while (temp_var != NULL)
	{
		count_ndll++;
		temp_var = temp_var->next;
	}

	return (count_ndll);
}

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 *
 * @head: pointer to the first node
 * @index: position of node to be deleted
 *
 * Return: 1 if sucess and -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_var;
	unsigned int position_count, dll_length;

	if (head == NULL || *head == NULL)
		return (-1);

	dll_length = dlistint_len(*head);

	if (index >= dll_length)
		return (-1);
	if (index == 0)
	{
		temp_var = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp_var);
	}
	else
	{
		temp_var = *head;
		position_count = 0;

		while (position_count < index)
		{
			temp_var = temp_var->next;
			position_count++;
		}

		temp_var->prev->next = temp_var->next;
		if (temp_var->next != NULL)
			temp_var->next->prev = temp_var->prev;
		free(temp_var);
	}

	return (0);
}
