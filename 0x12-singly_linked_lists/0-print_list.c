#include "lists.h"

/**
 * print_list - function that prints all the elements of a struct list
 * @h: a pointer to a struct
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
