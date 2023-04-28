#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return's number of elements to linked list.
 * @h: pointer's to list_t list.
 *
 * Return: the number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
