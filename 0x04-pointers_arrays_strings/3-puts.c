#include "holberton.h"

/**
 * _puts - function that prints out string
 * @str: first opperand
 * Return: string
 */

void _puts(char *str);
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
