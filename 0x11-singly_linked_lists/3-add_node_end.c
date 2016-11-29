#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of linked list
 * @str: string of name
 * Return: the address of the new element or Null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = _strdup(str);
	ptr->len = _strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	return (ptr);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of string str
 * @str: string to copy
 * Return: pointer to copy of string
 */

char *_strdup(const char *str)
{
	char *copy_string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	copy_string = malloc(i * sizeof(char));
	if (copy_string == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copy_string[j] = str[j];
		j++;
	}
	return (copy_string);
}
