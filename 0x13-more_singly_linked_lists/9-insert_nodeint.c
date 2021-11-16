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
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (*head == NULL || head == NULL)
		return (new);
	if (idx == 0)
	{
		new->next = *head;
		return (new);
	}

	current = *head;
	while (idx - 1 > 0)
	{
		current = current->next;
		idx--;
	}
	new->next = current->next;
	current->next = new;

	return (*head);
}
