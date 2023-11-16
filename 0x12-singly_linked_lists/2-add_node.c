#include "lists.h"

/**
 * add_node - adds a node to a single linked list
 *
 * @head: pointer to head of the list
 * @str: string to be inputted
 *
 * Return: address to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate_str;

	list_t *fresh_node;

	duplicate_str = strdup(str);

	fresh_node = (list_t *)malloc(sizeof(list_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->str = duplicate_str;
	fresh_node->next = *head;
	*head = fresh_node;

	return (*head);
}
