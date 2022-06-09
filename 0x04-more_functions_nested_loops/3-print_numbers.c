#include<stdio.h>
#include "main.h"
/**
 * print_numbers - is used to print from 0-9
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
