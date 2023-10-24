#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check code
 * @head: head node
 * @index: index position
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	for (i = 0; i < index; i++)
	{
		if (i == index - 1)
		{
			prev = current;
		}
		current = current->next;
	}
	prev->next = current->next;
	current->next = NULL;
	free(current);
	return (1);
}
