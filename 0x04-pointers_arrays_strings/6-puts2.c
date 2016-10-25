#include "holberton.h"

/**
 * puts2: prints out 2 of a string
 * @str: input string
 * Return: one char
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * puts2 - prints every other character in a string
 *
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
