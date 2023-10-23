#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - creating a new node
 * @head: pointer to a pointer to head node
 * @n: the new data
 * Return: a new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
