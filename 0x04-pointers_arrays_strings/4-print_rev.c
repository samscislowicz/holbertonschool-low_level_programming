#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: first opperand
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar(10);
}
