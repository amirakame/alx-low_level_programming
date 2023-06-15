#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data.
 * @head: pointer to the head node of the list
 *
 * Return: sum of n values or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
