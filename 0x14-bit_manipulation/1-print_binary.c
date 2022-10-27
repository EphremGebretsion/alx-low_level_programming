#include "main.h"

/**
 * po - used to calculate the power of the number
 * @b: the base number
 * @p: the power number
 * Return: the result of b to the power p
 */
unsigned long int po(unsigned long int b, unsigned int p)
{
	unsigned long int i = 0, res = 1;

	if (p == 0)
		return (1);
	for (; i < p; i++)
		res = res * b;
	return (res);
}
/**
 * print_binary - prints the binary of the decimal number
 * @n: the decimal number
 * Return: return nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int r = 1, m = n;
	int i = -1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		do {
			i++;
			r = po(2, i);
			if (r > n)
			{
				i--;
				break;
			}
		} while (r != n);
		for (; i >= 0; i--)
		{
			r = po(2, i);
			if (r <= m)
			{
				_putchar('1');
				m -= r;
			}
			else
				_putchar('0');
		}
	}
}
