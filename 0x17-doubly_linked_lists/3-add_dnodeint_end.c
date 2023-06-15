#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value of the new node
 *
 * Return: address of the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* if list is empty, new node is head */
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* go to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* add new node to the end */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
