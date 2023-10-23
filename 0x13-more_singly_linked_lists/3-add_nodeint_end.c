#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at end of list
 * @head: pointer to pointer to head
 * @n: node data
 * Return: node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	return (newNode);
}
