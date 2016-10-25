#include "holberton.h"

/**
 * rev_string
 * @s: first opperand
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char str[100];
	char *a;
	char i;

	i = 0;
	a = s;
	while (*a != 0)
	{
		str[i] = *a;
		a++;
		i++;
	}
	i--;
	while (i >= 0)
	{
		*s = str[i];
		s++;
		i--;
	}
}
