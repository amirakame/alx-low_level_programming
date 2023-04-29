#include "lists.h"

/**
 * free_listint2 - Frees listint2.
 * @head: Pointer to pointer to head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
