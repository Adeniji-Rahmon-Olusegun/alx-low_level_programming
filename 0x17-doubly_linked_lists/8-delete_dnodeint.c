#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * of a doubly linked list
 *
 * @head: address of the head
 * @n: data value to be stored in new node
 *
 * Return: Address to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
