#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: a pointer of a pointer that point to the first node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
