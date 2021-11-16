#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at nth position
 * @head: a pointer to a pointer pointing at the beginning of a linked list
 * @idx: is the position or the list where the new nobe should be added
 * @n: the data
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current, *previous;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	previous = NULL;
	for (current = *head; current != NULL; i++)
	{
		current = current->next;
		if (i >= idx - 1)
			break;
		previous = current;
	}

	new->next = current;

	if (previous != NULL)
		previous->next = new;
	else
		*head = new;
	return (*head);
}
