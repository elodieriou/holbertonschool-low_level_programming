#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: a pointer of a pointer that point to the beginning of a list
 * @n: a number
 * Return: the adress of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
	}
	last->next = new;
	return (last);
}
