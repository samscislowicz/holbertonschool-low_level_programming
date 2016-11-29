#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns a number of eleemnts in a linked list
 * @h: head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
