#include<stdio.h>
#include "main.h"
/**
 * pmin - prints the numbers in time format
 * @m: minute first digit
 * @mm: minute second digit
 * @s: second first digit
 * @ss: second second digit
 */
void pmin(int m, int mm, int s, int ss)
{
	_putchar(m + 48);
	_putchar(mm + 48);
	_putchar(':');
	_putchar(s + 48);
	_putchar(ss + 48);
	_putchar('\n');
}
/**
 * jack_bauer - used to print all the minutes
 */
void jack_bauer(void)
{
	int s, ss;
	int m = 0, mm = 0;
	int n = 9;

	while (m <= 2)
	{
		mm = 0;
		if (m == 2)
		{
			n = 3;
		}
		while (mm <= n)
		{
			s = 0;
			while (s <= 5)
			{
				ss = 0;
				while (ss <= 9)
				{
					pmin(m, mm, s, ss);
					ss++;
				}
				s++;
			}
			mm++;
		}
		m++;
	}
}
