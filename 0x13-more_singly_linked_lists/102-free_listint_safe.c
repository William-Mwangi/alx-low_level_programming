#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - check code
 * @h: head node
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		if (temp->n == -1)
		{
			break;
		}
		free(temp);
	}
	*h = NULL;
	current = *h;
	while (current != NULL)
	{
		current->n = 0;
		current = current->next;
	}
	return (size);
}

