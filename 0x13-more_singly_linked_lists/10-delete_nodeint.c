#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: a pointer to the struct list_t
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;
	return (n);
}

/**
 * delete_nodeint_at_index - function that deletes the node in a linked list
 * @head: a pointer to a pointer pointing at the beginning of a linked list
 * @index: the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t len = 0;
	listint_t *hold, *tmp;
	unsigned int i;

	len = listint_len(*head);
	if (head == NULL || *head == NULL)
		return (-1);
	if (index > len)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (-1);
	}
	hold = tmp->next->next;
	free(tmp->next);
	tmp->next = hold;
	return (1);
}
