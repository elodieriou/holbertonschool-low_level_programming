#include "lists.h"

/**
 * sum_node - function that count the sum of nth node of a linked list
 * @head: a pointer to the beginning of a linked list
 * @sum: the sum of the nth node
 * Return: Nothing
 */
void sum_node(listint_t *head, int *sum)
{
	if (head == NULL)
		return;
	sum_node(head->next, sum); /*recursively traverse the remaining nodes*/

	*sum += head->n; /*accumulate sum*/
}

/**
 * sum_listint - function that returns the sum of all the data(n)
 * of a linked list
 * @head: a pointer to the beginning of a linked list
 * Return: the sum of the data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	sum_node(head, &sum); /*find the sum of nodes*/
	return (sum);
}
