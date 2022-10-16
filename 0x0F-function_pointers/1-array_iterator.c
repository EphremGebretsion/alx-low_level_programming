#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - is used to iterate and excute the function
 * @array: is the array to be iterated
 * @size: the size of the array
 * @action: the function to be excuted
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
