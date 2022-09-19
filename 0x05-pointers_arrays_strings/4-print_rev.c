#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_rev - print the value of s in reverse
 * @s: is used to accept the s value
 */
void print_rev(char *s)
{
	int l = strlen(s) - 1;

	while (l >= 0)
	{
		putchar(s[l]);
		l--;
	}
	putchar('\n');
}
