#include<stdio.h>
#include "main.h"
/**
 * print_sign - is used to print the sign
 * @n: accepts the number
 * Return: 1 if + 0 is the number is 0 -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
