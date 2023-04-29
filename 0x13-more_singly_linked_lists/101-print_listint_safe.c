#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints listint_t safely.
 * @head: Pointer to the head node.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *p, *q;

	p = head;

	while (p != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) p, p->n);
		q = p;
		p = p->next;
		if (q < p)
		{
			fprintf(stderr, "Error: loop detected\n");
			exit(98);
		}
	}

	return (count);
}
