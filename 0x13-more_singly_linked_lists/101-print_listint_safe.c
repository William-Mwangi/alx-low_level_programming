#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints the list
 * @head: head node
 * Return: num of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
	{
		return (98);
	}
	tortoise = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			return (count);
		}
	}
	return (count);
}
