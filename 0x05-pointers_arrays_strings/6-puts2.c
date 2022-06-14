#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * puts2 - used to print every other char starting with the first
 * @str: accepts the string
 */
void puts2(char *str)
{
	int l = strlen(str);
	int i = 0;

	while (i < l)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
