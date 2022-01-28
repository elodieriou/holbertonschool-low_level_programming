#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * key can not be an empty string
 * @value: is the value associated with the key
 * value must be duplicated
 * value can be empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		ht->array[idx] = new;
		return (1);
	}
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	if (strcmp(ht->array[idx]->key, key) != 0)
	{
		new = add_node(&ht->array[idx], strdup(key), strdup(value));
		if (new == NULL)
			return (0);
	}
	return (1);
}

/**
 * add_node - function that add a node at the beginning
 * @head: double pointer to the beginning of a linked list
 * @key: the key
 * @value: the value's key
 * Return: the new node or 0 if error
 */
hash_node_t *add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	
	new->key = key;
	new->value = value;
	new->next = *head;
	*head = new;

	return (new);
}
