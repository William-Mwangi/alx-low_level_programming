#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of linked list
 * @head: head node
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
