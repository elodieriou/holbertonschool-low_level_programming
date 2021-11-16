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
 * insert_nodeint_at_index - function that inserts a new node at nth position
 * @head: a pointer to a pointer pointing at the beginning of a linked list
 * @idx: is the position or the list where the new nobe should be added
 * @n: the data
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len = 0;
	listint_t *new, *tmp;
	unsigned int i;

	len = listint_len(*head);
	if (idx > len) /*if idx rather than the number of element*/
		return (NULL);
	new = malloc(sizeof(listint_t)); /*allocate memory for a new node*/
	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head; /*place the new node at the beginning*/
		*head = new;
		return (new);
	}
	tmp = *head;
	for (i = 0; i < idx - 1; i++) /*find the position of the new node*/
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
