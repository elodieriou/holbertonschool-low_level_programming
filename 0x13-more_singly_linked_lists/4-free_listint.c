#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: a pointer to the first node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
