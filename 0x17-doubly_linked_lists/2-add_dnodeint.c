#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning
 * @head: pointer to head of dlistint_t
 * @n: integer for new node to contain
 *
 * Return: NULL if fails, else the address of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
