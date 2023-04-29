#include "lists.h"

/**
 * get_nodeint_at_index - git  nodeint at index.
 * @head: Pointer to head of the linked list.
 * @index: Index of the node, starting at 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (i == index)
		return (temp);
	else
		return (NULL);
}
