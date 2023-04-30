#include "lists.h"

/**
 * print_list - prints list.
 * @h: pointer to head of list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		count++;
		current = current->next;
	}

	return (count);
}
