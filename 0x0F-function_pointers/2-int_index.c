#include "function_pointers.h"
/**
 * int_index - returns the index of where the comparision becomes true
 * @array: the array to find the comparision
 * @size: the size of the array
 * @cmp: compare function
 *
 * Return: the index where the number is found else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array != NULL) && (cmp != NULL))
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
