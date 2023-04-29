#include "lists.h"

/**
 * add_nodeint_end - adds nodeint ent.
 * @head: pointer to head of list.
 * @n: integer value of new node.
 *
 * Return: address of new element, or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head) /* account for empty linked list */
	{
		*head = new;
		return (*head);
	}

	end = *head;
	while (end->next)
		end = end->next;

	end->next = new;

	return (new);
}
