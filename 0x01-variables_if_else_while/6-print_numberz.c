#include <stdio.h>

/**
 *main-prints all numbers of base 10, not allowed to use
 * char and only putchar allowed
 *Return: 0
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
