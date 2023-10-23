#include <stddef.h>
#include "lists.h"

/**
 * listint_len - print length
 * @h: head node
 * Return: num of nodes
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t counter;

	counter = 0;
	current = h;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
