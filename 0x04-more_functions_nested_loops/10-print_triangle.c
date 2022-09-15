#include<stdio.h>
#include "main.h"
/**
 * print_triangle - prints a '#' triangle
 * @size: used to accept the size
 */
void print_triangle(int size)
{
	int s = size;
	int i = 1;
	int j;
	int spaces;

	if (s > 0)
	{
		while (i <= s)
		{
			j = 1;
			spaces = s - i;
			while (j <= spaces)
			{
				putchar(32);
				j++;
			}
			while (j <= s)
			{
				putchar(35);
				j++;
			}
			putchar(10);
			i++;
		}
	}
	else
	{
		putchar(10);
	}
}
