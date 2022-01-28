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

	if (ht == NULL)
		return;
	printf("{");
	while (i <= ht->size)
	{
		while (ht->array[i] != NULL)
		{
			if (check_first == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key,
				       ht->array[i]->value);
				check_first = 1;
			}
			else if (check_first == 1)
				printf(", '%s': '%s'", ht->array[i]->key,
				       ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}");
	printf("\n");
}
