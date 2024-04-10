#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search for a value in array using jump search or
 * bloack search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value being looked for
 * Return: returns the index if found else return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), start = 0, end;

	if (!array)
		return (-1);
	while (1)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (size <= start + jump)
			break;
		if (value <= array[start + jump])
			break;
		start += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, start + jump);
	end = start + jump;
	if (end >= size)
		end = size - 1;
	while (start <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (value == array[start])
			return (start);
		start++;
	}

	return (-1);
}
