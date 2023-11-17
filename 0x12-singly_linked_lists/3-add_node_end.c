#include "lists.h"

/**
 * add_node_end - adds a node at the end of a
 * single linked list
 *
 * @head: head of the single linked list
 * @str: string to be inserted
 *
 * Return: updated list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate_str;
	size_t i, str_length;
	list_t *fresh_node, *temp_var;

	if (head == NULL)
		return (NULL);

	str_length = 0;

	duplicate_str = strdup(str);

	for (i = 0; duplicate_str[i] != '\0'; i++)
		str_length++;

	fresh_node = (list_t *)malloc(sizeof(list_t));

	if (fresh_node == NULL)
		return (NULL);
	if (duplicate_str == NULL)
	{
		free(fresh_node);
		return (NULL);
	}
	fresh_node->str = duplicate_str;
	if (fresh_node->str == NULL)
	{
		free(fresh_node);
		return (NULL);
	}
	fresh_node->len = str_length;
	fresh_node->next = NULL;

	temp_var = *head;

	if (*head == NULL)
	{
		*head = fresh_node;
	}
	else
	{
		while (temp_var->next != NULL)
			temp_var = temp_var->next;
		temp_var->next = fresh_node;
	}
	return (fresh_node);
}
