#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - Return the value of a bit at a given index
 * @n: A number to find the bit value from
 * @index: Index of bit to look for
 * Return: Value of the bit at the index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
