#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last number
 * @n: accept the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	_putchar('48' + l);
	return (l);
}
