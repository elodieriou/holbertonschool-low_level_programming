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
	hash_node_t *new_node, *new;
	char *dup_val = strdup(value), *dup_key = strdup(key);

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)dup_key, ht->size);

	if (ht->array[idx] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);

		new->key = dup_key;
		new->value = dup_val;
		ht->array[idx] = new;
		return (1);
	}
	else if (strcmp(dup_key, ht->array[idx]->key) == 0)
	{
		ht->array[idx]->value = dup_val;
		return (1);
	}
	else if (strcmp(dup_key, ht->array[idx]->key) != 0)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		new_node->key = dup_key;
		new_node->value = dup_val;
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}
	return (1);
}
