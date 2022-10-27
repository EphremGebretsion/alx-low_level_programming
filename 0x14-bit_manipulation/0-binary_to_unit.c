#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts the binary number into decimal
 * @b: the binary number
 * Return: returns the converted binary number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0, l, i, p;

	if (b == NULL)
		return (0);
	l = strlen(b);
	p = l - 1;
	for (i = 0; i < l; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			n += pow(2, p);
		p--;
	}
	return (n);
}
