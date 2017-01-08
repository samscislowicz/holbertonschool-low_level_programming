#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - length of list int
 * @h: head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
