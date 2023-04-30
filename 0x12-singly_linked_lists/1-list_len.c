#include "lists.h"

/**
 * list_len - list len.
 * @h: pointer to head of list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
