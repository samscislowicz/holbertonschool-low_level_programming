#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void);

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
}

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
		}
