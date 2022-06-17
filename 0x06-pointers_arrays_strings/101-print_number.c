#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_number - prints integer numbers
 * @n: accepts the integer
 */
void print_number(int n)
{
	int nn = n / 10;

	if (nn > 9)
	{
		print_number(nn);
	}
	_putchar(n % 10);
}
