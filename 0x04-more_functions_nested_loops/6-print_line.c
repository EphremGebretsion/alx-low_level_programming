#include<stdio.h>
#include "main.h"
/**
 * print_line - prints the number of lines
 * @n: is used to accept the number of lines to be printed
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
