#include "holberton.h"

/**
* swap_int - swap values between a and b
* @a: first opporand
* @b: second opperand
* Return: a and b with switched values
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
