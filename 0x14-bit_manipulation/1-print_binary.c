#include "main.h"

/**
 * po - used to calculate the power of the number
 * @p: the power number
 * Return: the result of 2 to the power p
 */
unsigned long int po(int p)
{
	unsigned long int res = 1;
	int i = 0;

	if (p == 0)
		return (1);
	for (; i < p; i++)
		res = res * 2;
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
	int i = -1, s;
	
	s = (8 * (sizeof(unsigned long int))) - 1;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		do {
			i++;
			r = po(i);
			if (r > n)
			{
				i--;
				break;
			}
		} while (r != n && i != s);
		for (; i >= 0; i--)
		{
			r = po(i);
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
