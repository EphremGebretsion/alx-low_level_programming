#include<stdio.h>
#include "main.h"
/**
 * psp - used to print ',' and the specified amount of space
 * @s: accept the space ammount
 */
void psp(int s)
{
	int i = 0;

	_putchar(',');
	while (i < s)
	{
		_putchar(' ');
		i++;
	}
}
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
 * print_times_table - prints the n number of time table
 * @n: accept the number
 */
void print_times_table(int n)
{
	int a = 0, m = 0, t;

	if (n <= 15 && n >= 0)
	{
		while (a <= n)
		{
			m = 0;
			while (m <= n)
			{
				t = m * a;
				if (m > 0)
				{
					if (t < 10)
						psp(3);
					else if (t < 100)
						psp(2);
					else
						psp(1);
				}
				pnum(t);
				m++;
			}
			_putchar('\n');
			a++;
		}
	}
}
