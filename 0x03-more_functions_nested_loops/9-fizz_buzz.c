#include <stdio.h>
/**
 * main - printing main
 *
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else  ((i % 3 != 0) && (i % 5 != 0))
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
