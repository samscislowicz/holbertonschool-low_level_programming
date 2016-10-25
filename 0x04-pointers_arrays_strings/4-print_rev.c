#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: first opperand
 * Return: string in reverse
 */

void print_rev(char *s);
{
	int i;
	char array[100];

	i = 0;
	while (*s != 0)
	{
		array[i] = *s;
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(array[i]);
		i++;
	{
		_putchar('\n');
}
