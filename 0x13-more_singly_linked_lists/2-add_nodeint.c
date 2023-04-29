#include "lists.h"

/**
 * add_nodeint - Adds nodeint.
 *
 * @head: A pointer to a pointer to the first node of the list.
 * @n: The integer to be included in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set new node data */
	new_node->n = n;
	new_node->next = *head;

	/* Set head to point to new node */
	*head = new_node;

	return (new_node);
}
