#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check code
 * @head: head node
 * @idx: index position
 * @n: int data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int i;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		return (NULL);
	}
	current = *head;
	for (i = 0; i <= idx; i++)
	{
		if (i == idx)
		{
			newNode->next = current->next;
			current->next = newNode;
		}
		current = current->next;
	}
	return (newNode);
}
