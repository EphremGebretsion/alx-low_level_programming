#include<stdio.h>
#include "main.h"
/**
 * pnum - used to print an int
 * @n: used to accept the number
 */
void pnum(int n)
{
	int r;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		pnum(n / 10);
	}
	r = n % 10;
	_putchar(r + 48);
}
/**
 * print_to_98 - used to print from the number to 98
 * @n: used to accept the number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			pnum(n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			pnum(n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
