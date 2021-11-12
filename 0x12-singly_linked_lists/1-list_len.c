#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: a pointer to the struct list_t
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;
	return (n);
}
