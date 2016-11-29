#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: head of node
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->len = _strlen(str);
	ptr->str = _strdup(str);
	ptr->next = *head;
	*head = ptr;
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
