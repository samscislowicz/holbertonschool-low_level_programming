#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
