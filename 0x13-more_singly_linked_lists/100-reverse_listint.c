#include "lists.h"

/**
 * reverse_listint - Reverses listint.
 * @head: double pointer to the beginning of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *temp;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = temp;
	}
	(*head)->next = previous;

	return (*head);
}
