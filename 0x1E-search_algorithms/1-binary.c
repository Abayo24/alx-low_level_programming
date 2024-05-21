#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_arr - prints current subarray
 * @array: pointer to array of integers
 * @left: first index of subarray
 * @right: last index of subarray
*/

void print_arr(int *array, size_t left, size_t right)
{
	size_t i;

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
}

/**
 * binary_search - searches for a value in a sorted array
 *                 of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located if not present return -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_arr(array, left, right);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
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
