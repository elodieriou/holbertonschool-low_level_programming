#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int check_first = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	while (i <= ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (check_first == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				check_first = 1;
			}
			else if (check_first == 1)
				printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		i++;
	}
	printf("}");
	printf("\n");
}
