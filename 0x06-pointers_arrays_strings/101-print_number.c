#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_number - prints integer numbers
 * @n: accepts the integer
 */
void print_number(int n)
{
	int nn = n / 10, r;

	if (nn > 0)
	{
		print_number(nn);
	}
	r = n % 10;
	_putchar(r + 48);
}
