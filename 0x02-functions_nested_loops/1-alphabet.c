#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all the alphabet in small leters
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
