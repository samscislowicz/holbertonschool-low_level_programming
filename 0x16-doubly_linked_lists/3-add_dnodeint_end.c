#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of list
 * @head: head of list
 * @n: number inside node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *walk;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	walk = *head;
	while (walk->next != NULL)
		walk = walk->next;
	walk->next = newnode;
	newnode->prev = walk;
	return (newnode);
}
