#include "list.h"

/**
 * get_dnodeint_at_index - locates node in dlistint_t list
 * @head: head of the dlistont_t list
 * @index: node to locate
 *
 * Return: NULL if there is no node, else address of located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
