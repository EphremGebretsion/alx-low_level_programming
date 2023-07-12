#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - search for a value in an array using binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in the array or size of array
 * @value: is the value being searched for
 * Return: returns the index of the value if found else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;
	size_t middle;
	char *sp = "";

	if (!array)
		return (-1);
	while (left <= right)
	{
		middle = (left + right) / 2;
		i = left;
		printf("Searching in array: ");
		sp = "";
		for (; i <= right; i++)
		{
			printf("%s%d", sp, array[i]);
			sp = ", ";
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
