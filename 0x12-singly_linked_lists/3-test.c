#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * @head: new head node
 * @str: string data
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *linked;

	newNode = (struct list_s *) malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	linked = *head;
	while (linked->next != NULL)
	{
		linked = linked->next;
	}
	linked->next = newNode;
	return (newNode);
}
