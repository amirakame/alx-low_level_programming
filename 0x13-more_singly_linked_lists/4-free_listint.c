#include "lists.h"

/**
 * free_listint - Frees listint.
 * @head: A pointer to a pointer the listint_t list to be freed.
 **/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
