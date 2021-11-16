#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: a pointer to the beginning of the linked list
 * @index: as arguments
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (currentNode)
	{
		if (count == index)
			return (currentNode);
		currentNode = currentNode->next;
		count++;
	}
	return (currentNode);
}
