#include"holberton.h"
/**
 * print_numbers - print numbers followed by a new line.
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
