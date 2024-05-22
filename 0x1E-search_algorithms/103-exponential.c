#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search2 - perfoms binary search
 * @array: array to be searched
 * @left: first index of subarray
 * @right: last index of subarray
 * @value: value to search for
 * Return: index of value found otherwise -1
 */

int binary_search2(int *array, int left, int right, int value)
{
	int i;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

/**
 * exponential_search -  searches for a value in a sorted array of integers
 *                       using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	int left, right, result;

	if (array == NULL || size == 0)
		return (-1);

	/*printf("Value checked array[0] = [%d]\n", array[0]);*/
	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = (int)(i / 2);
	right = (int)((i < size) ? i : size - 1);
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	result = binary_search2(array, left, right, value);

	return (result);
}
