#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *t;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t->str);
		free(t);
	}
}
