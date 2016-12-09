#include "holberton.h"
/**
 * set_bit - Print out the binary representation of an unsigned long int
 * @n: The unsigned long int to print in binary
 * @index: Index to set bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = sizeof(*n) * 8 - 1;
	if (index > i)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
