#include "lists.h"

size_t listint_count(const listint_t *h);

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position in the single linked list
 *
 * @head: head of the list
 * @idx: index position where new node will be
 * inserted
 *
 * @n: data to be inserted in new node
 *
 * Return: address to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j, node_count;
	listint_t *temp_var, *previousNode, *fresh_node;

	if (head == NULL)
		return (NULL);

	fresh_node = (listint_t *)malloc(sizeof(listint_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;
	if (*head == NULL)
	{
		*head = fresh_node;
		return (*head);
	}

	if (idx == 0)
	{
		temp_var = *head;
		fresh_node->next = temp_var;
		*head = fresh_node;
	}
	else
	{
		node_count = listint_count(*head);

		if (node_count < idx)
			return (NULL);

		temp_var = previousNode = *head;

		j = 0;
		while (j < (idx - 1))
		{
			previousNode = previousNode->next;
			temp_var = temp_var->next;
			j++;
		}
		temp_var = temp_var->next;
		previousNode->next = fresh_node;
		fresh_node->next = temp_var;
	}

	return (fresh_node);
}

/**
 * listint_count - returns the length of a
 * single linked list
 *
 * @h: head of the single linked list
 *
 * Return: length/size of the single-
 * linked-list
 */

size_t listint_count(const listint_t *h)
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
