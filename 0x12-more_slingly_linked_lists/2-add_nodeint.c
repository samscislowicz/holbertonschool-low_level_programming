#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - add a listint_t node to list
 *@h: pointer to head of list
 *@n: the address of the new node to add
 *Return: address of new element, NULL if it fails
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
