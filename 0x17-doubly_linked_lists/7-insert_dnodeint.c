#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head node of the list
 * @idx: index where the new node should be added (starting from 0)
 * @n: integer value to store in the new node
 *
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *head;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(head, n));

	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
