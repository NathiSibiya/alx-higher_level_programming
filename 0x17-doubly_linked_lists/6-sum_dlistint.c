#include "lists.h"

/**
 * sum_dlistint - sums all data of dlistint_t list
 * @head: had of dlistint_t list
 *
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
