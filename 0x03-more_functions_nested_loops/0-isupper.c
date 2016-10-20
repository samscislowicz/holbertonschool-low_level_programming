#include "holberton.h"

/**
* _isupper - return 1 if uppercase, 0 if otherwise
* @c: letter to check
* Return: 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
