#include "lists.h"

/**
 * listint_len - linked listint_t list.
 * @h: pointer to the start of the list.
 *
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
