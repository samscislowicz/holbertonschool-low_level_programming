#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees d list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *walk;

	while (head != NULL)
	{
		walk = head;
		head = head->next;
		free(walk);
	}
}
