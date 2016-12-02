#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints elements of a list
 *@h: pointer to the head of the list
 *Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		numnodes++;
		h = h->next;
	}
	return (numnodes);
}
