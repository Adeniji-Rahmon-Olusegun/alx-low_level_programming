#ifndef SLINKED_LIST_H
#define SLINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list to be
 * used for this project
 *
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
#endif
