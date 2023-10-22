#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the memory allocated
 * @head: head o flinked list
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
