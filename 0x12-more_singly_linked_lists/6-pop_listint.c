#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - delete head node of a list
 *@head:pointer to a pointer of te head of a list
 *Return: Heads node data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	current = *head;
	if (current == NULL)
		return (0);
	data = current->n;
	*head = current->next;
	free(current);
	return (data);
}
