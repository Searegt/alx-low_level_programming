#include "lists.h"

/**
 * free_list - frre memory from linked list
 * @head: the linked list
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
