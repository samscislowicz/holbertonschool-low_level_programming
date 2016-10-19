#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print from given number to 98
 * @n: first operand
 * Return: unknown
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
