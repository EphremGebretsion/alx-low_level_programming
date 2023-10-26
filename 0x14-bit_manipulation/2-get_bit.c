#include "main.h"
/**
 * po - used to calculate the power of the number
 * @p: the power number
 * Return: the result of b to the power p
 */
unsigned long int po(unsigned int p)
{
	unsigned long int res = 1;
	unsigned int i;

	i = 0;
	if (p == 0)
		return (1);
	for (; i < p; i++)
		res = res * 2;
	return (res);
}
/**
 * get_bit - used to get the bit value the given index
 * @n: the number
 * @index: the index for the bit
 * Return: the bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s = 8 * sizeof(unsigned long int) - 1, r;
	unsigned long int m = n;
	int j, i = 0;

	if (index >= s)
		return (-1);
	if (n == 0 && index == 0)
		return (0);
	do {
		r = po(i);
		if (r > n)
		{
			i--;
			break;
		}
		i++;
	} while (r != n && i != (int)s);
	for (; i >= 0; i--)
	{
		j = 0;
		r = po(i);
		if (r <= m)
		{
			m -= r;
			j = 1;
		}
		else
			j = 0;
		if (i == (int)index)
			return (j);
	}
	return (0);
}
