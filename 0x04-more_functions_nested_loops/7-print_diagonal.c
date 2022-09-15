#include<stdio.h>
#include "main.h"
/**
 * print_diagonal - print the diagonal
 * @n: is used to accept the number for the diagonal
 */
void print_diagonal(int n)
{
	int i = 1;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			s = i - 1;
			while (s > 0)
			{
				_putchar(' ');
				s--;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
