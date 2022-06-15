#include<stdio.h>
#include "main.h"
/**
 * pnum - used to print the nuber
 * @n: accept the number
 */
void pnum(int n)
{
	int s = 0;

	if (n < 10)
	{
		_putchar(n + 48);
	}
	else
	{
		s = n / 10;
		_putchar(s + 48);
		s = n % 10;
		_putchar(s + 48);
	}
}
/**
 * times_table - prints the time table from 0 to 9
 */
void times_table(void)
{
	int m = 0, n = 0, r;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			r = m * n;
			if (m != 0)
			{
				_putchar(',');
				if (r < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
			pnum(r);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
