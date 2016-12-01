#include "lists.h"
#include <stdio.h>
/**
 *listint_len - length of the list
 *@h: pointer to the head of the list
 *Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h != NULL)
	{
		numnodes++;
		h = h->next;
	}
	return (numnodes);
}
