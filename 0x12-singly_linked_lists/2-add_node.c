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
	size_t count_dup_str, i;
	list_t *fresh_node;

	if (head == NULL)
		return (NULL);
	duplicate_str = strdup(str);
	count_dup_str = 0;

	for (i = 0; duplicate_str[i] != '\0'; i++)
		count_dup_str++;

	fresh_node = (list_t *)malloc(sizeof(list_t));

	if (fresh_node == NULL)
		return (NULL);

	if (*head == NULL)
		fresh_node->next = NULL;
	else
		fresh_node->next = *head;
	fresh_node->str = duplicate_str;
	fresh_node->len = count_dup_str;
	*head = fresh_node;

	return (*head);
}
