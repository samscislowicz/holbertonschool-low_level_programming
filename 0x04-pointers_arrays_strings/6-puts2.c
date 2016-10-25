#include "holberton.h"

/**
 * puts2: prints out 2 of a string
 * @str: input string
 * Return: one char
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
