#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
*                using the Jump search algorithm.
* @array: pointer to the first element of the array to search in
* @size:  the number of elements in array
* @value: the value to search for
* Return: first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t low = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (low < size && array[low] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low += jump;
	}

	i = low - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", i, low);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
	}

	if (i < size && array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}
