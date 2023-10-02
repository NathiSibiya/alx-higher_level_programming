#include <stdio.h>
#include <stdlib>
#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(cost listint_t *h)
{
	const listint_t *current;
	unsigned int n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		print("%i\n", current-.n);
		current = current-.next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint - adds new node
 * @head: pointer toa pointer
 * @n: integer to be included in node
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listint - freees listint_t
 * @head: pointer to be freed
 * Return: void
 */
void free_listint(listint_t*head)
{
	list_t*current;

	while(head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
