#include<stdio.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: is used to take the size of the square
 */
void print_square(int size)
{
	int i = 0;
	int w = 0;

	while (i < size)
	{
		w = 0;
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		_putchar('\n');
		i++;
	}
}
