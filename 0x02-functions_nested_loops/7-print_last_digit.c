#include "holberton.h"

/**
 * print_last_digit - print out last digit of number
 * @n: first operand
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		n = n;
	}
	i = n % 10;
	_putchar(i + '0');

	return (i);
}
