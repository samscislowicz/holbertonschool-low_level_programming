#include <stdio.h>

/**
 *main-prints all numbers of base 10 starting from 0
 *Return: 0;
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
