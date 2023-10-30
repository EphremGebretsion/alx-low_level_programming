#include "main.h"
#include <math.h>

/**
 * powtwo - calculates the power of 2
 * @exp: the exponent
 * Return: returns 2 to the power exp
 */
unsigned int powtwo(unsigned int exp)
{
	unsigned int i, res;

	res = 1;
	if (exp == 1)
		return (2);
	for (i = 1; i < exp; i++)
		res *= 2;

	return (res);
}

/**
 * flip_bits - computes number of bits you would need to flip to
 * to get from one number to another
 * @n: the first number
 * @m: the other number
 * Return: returns the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, size, count, tmp;

	difference = n ^ m;
	tmp = difference;
	count = 0;
	size = 8 * sizeof(unsigned long int);

	for (; 0 < size; size--)
	{
		if (tmp >= pow(2.0, (double)size))
		{
			count++;
			tmp -= pow(2.0, (double)size);
		}
	}
	return (count);
}
