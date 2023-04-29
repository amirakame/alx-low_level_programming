#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes nodeint at index.
 * @head: Pointer to a pointer the head of the linked list.
 * @index: Index of where the node should be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	prev = NULL;
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (i != index || temp == NULL)
		return (-1);

	if (prev == NULL)
		*head = temp->next;
	else
		prev->next = temp->next;

	free(temp);
	return (1);
}
