#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - frees the list and sets the head to NULL
 *@head: pointer to the pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
