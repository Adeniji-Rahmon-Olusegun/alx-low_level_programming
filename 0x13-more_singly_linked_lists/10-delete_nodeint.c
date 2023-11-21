#include "lists.h"

size_t listint_counts(const listint_t *h);

/**
 * delete_nodeint_at_index - deletes node at index
 *
 * @head: head of the list
 * @index: index of node to be deleted
 *
 * Return: 1 if success and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, node_counts;
	listint_t *nextNode, *temp_var;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	node_counts = listint_counts(*head);

	if (node_counts < index)
		return (-1);
	if ((index == 0) && ((*head)->next == NULL))
	{
		temp_var = *head;
		*head = NULL;
		free(temp_var);
		return (1);
	}

	if (index == 0)
	{
		temp_var = *head;
		*head = (*head)->next;
		free(temp_var);
	}
	else
	{
		temp_var = *head;

		i = 0;
		while (i < (index - 1))
		{
			temp_var = temp_var->next;
			i++;
		}
		nextNode = temp_var->next;
		temp_var->next = nextNode->next;
		free(nextNode);
	}

	return (1);
}

/**
 * listint_counts - returns the length of a
 * single linked list
 *
 * @h: head of the single linked list
 *
 * Return: length/size of the single-
 * linked-list
 */

size_t listint_counts(const listint_t *h)
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
