#include "holberton.h"

/**
 * _islower - returns 1 for lowercase, 0 for other
 * @c: first operand
 * Return: 1 or 0
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
