#include "holberton.h"

/**
 * times_table - print out times table of 0 to 12
 * Return: unknown
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}

			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
		j = 0;
	}
}
