#include "main.hi"
#include<string.h>
#include<stdio.h>
/**
 * puts2 - used to print every other char starting with the first
 * @str: accepts the string
 */
void puts2(char *str)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		putchar(s[i]);
		i += 2;
	}
	putchar('\n');
}
