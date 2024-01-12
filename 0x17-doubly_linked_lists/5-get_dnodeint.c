#include "lists.h"

/**
 * get_dnodeint_len - returns the length of double linked
 * list
 *
 * @head: head of node
 *
 * Return: length of list
 */

size_t get_dnodeint_len(dlistint_t *head)
{
	size_t counter_dll;
	dlistint_t *temp_var;

	temp_var = head;

	counter_dll = 0;

	while (temp_var != NULL)
	{
		counter_dll++;
		temp_var = temp_var->next;
	}

	return (counter_dll);
}

/**
 * get_dnodeint_at_index - returns the nth node of a
 * doubly linked list.
 *
 * @head: head of the node
 * @index: node position
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t dll_length, idx;
	dlistint_t *temp_var;

	dll_length = get_dnodeint_len(head);

	if (index > dll_length)
		return (NULL);

	idx = 0;
	temp_var = head;

	while (idx <= index)
	{
		temp_var = temp_var->next;
		idx++;
	}

	return (temp_var);
}
