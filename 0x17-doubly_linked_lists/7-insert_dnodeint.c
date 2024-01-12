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
 * add_dnodeintd - adds a node at the beginning
 * of a doubly linked list
 *
 * @head: address of the head
 * @n: data value to be stored in new node
 *
 * Return: Address to the new node
 */

dlistint_t *add_dnodeintd(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;

	if (head == NULL)
		return (NULL);

	fresh_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (fresh_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		fresh_node->n = n;
		fresh_node->prev = NULL;
		fresh_node->next = NULL;
		*head = fresh_node;
		return (fresh_node);
	}

	fresh_node->n = n;
	fresh_node->prev = NULL;
	fresh_node->next = NULL;

	(*head)->prev = fresh_node;
	fresh_node->next = *head;
	*head = fresh_node;

	return (fresh_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the first node of the double linked list
 * @idx: position of insertion
 * @n: data to be stored in node
 *
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_var, *fresh_node;
	unsigned int position_count, dll_length;

	if (h == NULL)
		return (NULL);
	dll_length = get_dnodeint_len(*h);

	if (idx > dll_length)
		return (NULL);
	if (idx == 0)
		add_dnodeintd(h, n);
	else if ((*h)->next == NULL)
		add_dnodeint_end(h, n);
	else if (idx == dll_length)
		add_dnodeint_end(h, n);
	else
	{
		fresh_node = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (fresh_node == NULL)
			return (NULL);
		fresh_node->n = n;
		fresh_node->prev = NULL;
		fresh_node->next = NULL;

		position_count = 0;

		temp_var = *h;

		while (position_count < idx - 1)
		{
			temp_var = temp_var->next;
			position_count++;
		}
		fresh_node->prev = temp_var;
		fresh_node->next = temp_var->next;
		temp_var->next = fresh_node;
		fresh_node->next->prev = fresh_node;
	}

	return (fresh_node);
}
