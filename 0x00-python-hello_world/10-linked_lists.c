#include <stdio.h>
#include <stdlib>
#include "lists.h"

/**
 * print_listsint - prints all elements of listsint_t
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsignedint n;
	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to pointer of the start
 * @n: interger to be included in node
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listint - frees a listint_t
 * @head: pointer to the list
 * Return: void
 */
void free_listint_t(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
