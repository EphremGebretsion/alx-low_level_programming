#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * puts_half - is used to print the left half of the string
 * @str: is used to accept the atring
 */
void puts_half(char *str)
{
	int l = strlen(str);
	int m;

	if (l % 2 == 0)
	{
		m = l / 2;
	}
	else
	{
		m = (l + 1) / 2;
	}
	while (m < l)
	{
		putchar(str[m]);
		m++;
	}
	putchar('\n');
}
