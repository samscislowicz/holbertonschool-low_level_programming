#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - gets sum of list
 * @head: head of list.
 * Return: total or 0 if the list is empty
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *walk;
	int total;

	total = 0;
	if (head == NULL)
		return (0);
	walk = head;
	while (walk != NULL)
	{
		total = walk->n + total;
		walk = walk->next;
	}
	return (total);
}
