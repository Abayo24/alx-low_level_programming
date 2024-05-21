#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: number of elements in array
 * Return: first index where value is located if NULL return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t index;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[low] == array[high])
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		index = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (index >= size)
		{
			printf("Value checked array[%lu] is out of range\n", index);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		if (array[index] < value)
			low = index + 1;
		else
			high = index - 1;

	}

	return (-1);
}
