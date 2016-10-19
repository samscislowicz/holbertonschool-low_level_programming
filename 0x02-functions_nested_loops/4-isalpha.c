#include "holberton.h"

/**
 * _isalpha - tells if a letter is a letter or not
 * @c: first operand
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
