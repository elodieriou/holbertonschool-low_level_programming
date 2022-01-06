#include "lists.h"

/**
 * dlistint_len - function that returns the number of node
 * @h: a pointer at the beginning of a (doubly) linked list
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a DLL
 * @head: a double pointer at the beginning of a doubly linked list
 * @index: the position where the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len_node = 0;
	dlistint_t *hold_node, *tmp;
	unsigned int i;

	len_node = dlistint_len(*head);
	if (index > len_node)
		return (-1);

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		tmp = tmp->next;

	if (tmp->next->next == NULL)
		tmp->next = NULL;

	hold_node = tmp->next;
	tmp->next = hold_node->next;
	hold_node->next->prev = tmp;
	free(hold_node);
	return (1);
}
