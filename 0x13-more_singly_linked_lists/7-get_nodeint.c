#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at a certain index
 * @head: head node
 * @index: int
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}
