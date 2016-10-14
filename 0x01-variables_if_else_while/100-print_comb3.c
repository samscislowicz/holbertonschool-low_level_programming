#include<stdio.h>

/**
 * main - print 2 digit combos
 *
 * Return: 0
 */
int main(void)
{
	int f = '0';
	int s = '0';

	while (f <= '8')
	{
		s = '0';
		while (s <= '9')
		{
			putchar(f);
			putchar(s);
			if (s == '9' && f == '8')
			{
			}
			else if(f !> s)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
