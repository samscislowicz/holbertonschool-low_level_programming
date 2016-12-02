#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end -add a new node to the end
 *@h: pointer to the head
 *@n:the number for inside the node
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next !=NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
