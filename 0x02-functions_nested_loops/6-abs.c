#include "holberton.h"

/**
 * _abs - returns absolute value of number
 * @n: first operand
 * Return: absolute value
 */

int _abs(int n )
{
	if (n <0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
