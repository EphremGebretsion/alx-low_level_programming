#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), start = 0, end;

	if (!array)
		return (-1);
	while (value > array[start])
	{
		start += jump;
		if (start >= size)
			return (-1);
	}
	while (array[start] < value)
	{
		if 
		if (value = array[start])
			return (start);
		start++;
	}

}
