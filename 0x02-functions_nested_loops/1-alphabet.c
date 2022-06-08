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
void print_alphabet(void)
{
	char ch = 'a';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
        _putchar("\n");
}
