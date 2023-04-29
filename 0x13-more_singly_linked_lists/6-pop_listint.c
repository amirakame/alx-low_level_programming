#include "lists.h"

/**
 * pop_listint - pop listint.
 * @head: Pointer to pointer to head of the linked list
 *
 * Return: The head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
