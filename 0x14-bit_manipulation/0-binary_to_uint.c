#include "main.h"
#include <string.h>

/**
 * po - used to calculate the power of the number
 * @b: the base number
 * @p: the power number
 * Return: the result of b to the power p
 */
unsigned int po(unsigned int b, unsigned int p)
{
	unsigned int i = 0, res = 1;

	for (; i < p; i++)
		res = res * b;
	return (res);
}
/**
 * binary_to_uint - converts the binary number into decimal
 * @b: the binary number
 * Return: returns the converted binary number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, l, i, p;

	if (b == NULL)
		return (0);
	l = strlen(b);
	p = l - 1;
	for (i = 0; i < l; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			n += po(2, p);
		p--;
	}
	return (n);
}
