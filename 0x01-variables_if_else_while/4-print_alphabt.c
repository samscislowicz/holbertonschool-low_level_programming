#include <stdio.h>

/**
 *main-print the alphabet in lowercase without the letter
 *q and e.
 *Return: 0
 */

int main(void)
{
	int i = 0;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char letter;

	while (i < 26)
	{
		letter = alphabet[i];
		if (i == 4 || i == 16)
		{
			i++;
		}
		else
		{
			putchar(letter);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
