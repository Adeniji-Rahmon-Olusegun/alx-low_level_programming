#include "lists.h"

/**
 * free_list - frees memory allocated to single
 * list link
 *
 * @head: head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	free(head);
	free(head->str);
	free(head->next);
}
