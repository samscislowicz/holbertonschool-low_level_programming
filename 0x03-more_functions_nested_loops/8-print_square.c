#include "holberton.h"

/**
 * print_square - print square
 * @size: prints size of square
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		j = 0;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
