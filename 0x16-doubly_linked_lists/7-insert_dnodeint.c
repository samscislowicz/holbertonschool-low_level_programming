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

	if (*head == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->prev = NULL; newnode->next = NULL;
		*head = newnode; return (newnode);
	}
	walk = *head;
	for (i = 0; i != idx; i++)
	{
		if (walk->next == NULL && i == idx - 1)
		{
			walk->next = newnode; newnode->next = NULL;
			newnode->prev = walk;
			return (newnode);
		}
		else if (walk->next == NULL)
		{
			free(newnode); return (NULL);
		}
		walk = walk->next;
	}
	newnode->next = walk;
	if (idx != 0)
	{
		newnode->prev = walk->prev; (walk->prev)->next = newnode;
	}
	else
	{
		newnode->prev = NULL; *head = newnode;
	}
	walk->prev = newnode;
	return (newnode);
}
