#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	size_t tempsize;
	size_t temp;

	tempsize = size;

	while(tempsize > 1)
	{
		j = 0;
		while(j < tempsize - 1)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			j++;
		}
		tempsize = j;
	}
}
