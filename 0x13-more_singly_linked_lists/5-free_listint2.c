#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
