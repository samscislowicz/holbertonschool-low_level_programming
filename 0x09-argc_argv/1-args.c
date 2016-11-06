#include <stdio.h>
/**
 * main - prints the number of arguements you passed to it
 * @argc: arguement count
 * @argv: arguments you pass to progrm
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	do {
		(void)(argv);
	} while (0);

	while (argc--)
		i++;
	printf("%d\n", i - 1);
	return (0);
}
