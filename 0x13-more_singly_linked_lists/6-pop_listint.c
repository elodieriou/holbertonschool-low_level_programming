#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: a pointer of a pointer that point to the beginning of a linked list
 * Return: the head node's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	else
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
