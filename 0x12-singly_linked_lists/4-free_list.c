#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: a pointer to the first node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
