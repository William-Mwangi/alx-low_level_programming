#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print ints
 * @h: head node
 * Return: unsigned int
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
