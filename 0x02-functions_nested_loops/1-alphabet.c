#include<stdio.h>
#include "main.h"
/**
 * main - startung point
 * print the alphabets in lower case using _putchar
 * Return: 0 at the end
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet -used to print using putchar
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
