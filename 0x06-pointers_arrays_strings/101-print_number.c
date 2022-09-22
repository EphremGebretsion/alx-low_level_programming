#include "main.h"
/**
 * print_number - prints integer numbers
 * @n: accepts the integer
 */
void print_number(int n)
{
	int nn, r;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	nn = n / 10;
	if (nn > 0)
	{
		print_number(nn);
	}
	r = n % 10;
	_putchar(r + 48);
}
