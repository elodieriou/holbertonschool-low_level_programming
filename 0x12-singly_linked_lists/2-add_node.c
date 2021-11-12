#include "lists.h"

/**
 * _strlen - function that return the lenght of a string
 * @s: a string
 * Return: the lenght of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: a pointer of a pointer that point to the beginning of a list
 * @str: a pointer to a string
 * Return: the adress of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
