#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlist
 * @head: head of list.
 * Return: node or null is node doesn't exist.
 * @index: index of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *walk;

	if (head == NULL)
		return (NULL);
	i = 0;
	walk = head;
	while (i != index)
	{
		if (walk->next == NULL)
			return (NULL);
		walk = walk->next;
		i++;
	}
	return (walk);
}
