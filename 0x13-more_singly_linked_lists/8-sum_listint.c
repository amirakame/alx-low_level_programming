#include "lists.h"

/**
 * sum_listint - sum listint_t.
 * @head: Pointer to head of the linked list
 *
 * Return: Sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
