#include "holberton.h"

int print_last_digit(int n)
{
	int i;

	n = _abs(n);
	i = n % 10;
	_putchar(i + '0');

	return (i);
}

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
