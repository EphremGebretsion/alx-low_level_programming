#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the gived index of bit to 0
 * @n: the gived number
 * @index: the index of the bit
 * Return: returns 1 it sucseeded else return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s = 8 * sizeof(unsigned long int);
	unsigned long int my_adder = 1;

	if ((index >= s) || (n == NULL))
		return (-1);

	my_adder = my_adder << index;
	*n = *n & (~my_adder);

	return (1);
}

