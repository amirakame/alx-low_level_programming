#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts nodeint at index.
 * @head: Pointer to the head of the linked list.
 * @idx: Index of where the new node should be added, starting from 0
 * @n: Data to be added in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (idx > 1)
	{
		if (!temp || !(temp->next))
			return (NULL);
		temp = temp->next;
		idx--;
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
