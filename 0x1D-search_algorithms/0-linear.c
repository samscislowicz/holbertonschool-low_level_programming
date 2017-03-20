#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located, or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int index;

	int index = -1;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%d] = [%d]", i, value)
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}
	return (index);
}
