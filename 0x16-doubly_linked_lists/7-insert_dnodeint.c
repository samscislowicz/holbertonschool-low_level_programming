#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_idx - adds new node
 * @head: head of list
 * @n: number inside node
 * @idx: index of list
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *newnode, *walk;
	unsigned int i;

	i = 0;
	if (*head == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	walk = *head;
	while (i != idx)
	{
		walk = walk->next;
		i++;
	}
	newnode->next = walk;
	newnode->prev = walk->prev;
	(walk->prev)->next = newnode;
	walk->prev = newnode;
	return (newnode);
}
