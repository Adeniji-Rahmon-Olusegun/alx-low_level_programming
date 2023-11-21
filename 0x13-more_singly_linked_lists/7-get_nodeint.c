#include "lists.h"

/**
 * listint_size - returns the length of a
 * single linked list
 *
 * @h: head of the single linked list
 *
 * Return: length/size of the single-
 * linked-list
 */

size_t listint_size(const listint_t *h)
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

/**
 * get_nodeint_at_index - retrieves the nth node
 * of the single linked list
 *
 * @head: head of the list
 * @index: nth position of the desired node
 *
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, node_length;
	listint_t *temp_var;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	node_length = listint_size(head);

	if (index > node_length)
		return (NULL);

	temp_var = head;

	i = 0;

	while (i < index)
	{
		temp_var = temp_var->next;
		i++;
	}

	return (temp_var);
}
