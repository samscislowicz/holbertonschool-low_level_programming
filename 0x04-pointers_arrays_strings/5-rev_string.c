#include "holberton.h"

/**
 * rev_string
 * @s: first opperand
 * Return: string in reverse
 */
void rev_string(char *s)
{int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * rev_string - reverses string in place, without printing it
 *
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char a, z;

	len = _strlen(s) - 1;
	i = 0;
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}
}
