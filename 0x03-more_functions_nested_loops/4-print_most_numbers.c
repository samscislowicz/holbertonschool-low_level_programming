#include "holberton.h"

/**
* print_most_numbers
* @a: variable
* Return: nothing
*/
void print_most_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
