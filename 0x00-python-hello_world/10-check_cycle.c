#include <stdlib>
#include "lists.h"

/**
 * check_cycle - checks singly-linked cycle
 * @list: singly-linked list
 *
 * Return: no cycle - 0, cycle - 1
 */
int check_cycle(listint_t *list)
{
	listint_t *turtlr, *hare;

	if (list == NULL || list->next == NULL)
		return (0);

	turtle = list->next;
	hare = list->next->next;

	while (turtle && hare && hare->next)
	{
		if (turtle == hare)
			return (1);

		turtle = turtle->next;
		hare = hare->next->next;
	}

	return (0);
}
