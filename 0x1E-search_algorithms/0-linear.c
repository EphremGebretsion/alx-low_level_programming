#include <stdio.h>
#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - serch for a value in array using linear search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value being looked for
 * Return: returns the index if foud else return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
