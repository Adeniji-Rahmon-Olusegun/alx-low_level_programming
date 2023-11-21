#include "lists.h"

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
	unsigned int i;
	listint_t *temp_var;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	temp_var = head;

	i = 0;

	while (i < index)
	{
		temp_var = temp_var->next;
		i++;
	}

	return (temp_var);
}
