#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of string str
 * @str: string to copy
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	char *copy_string;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	copy_string = malloc(i * sizeof(char));
	for (j = 0; str[j] != '\0'; j++)
		copy_string[j] = str[j];
	return (copy_string);
}
