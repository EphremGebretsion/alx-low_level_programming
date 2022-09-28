#include "main.h"
#include<string.h>
/**
 * pr - prints the given index value in the string
 * @st: accepts the string
 * @n: accepts the index value
 */
void pr(char *st, int n)
{
	if (n >= 0)
	{
		_putchar(st[n]);
		pr(st, n - 1);
	}
}
/**
 * _print_rev_recursion - prints the string in reverse
 * @s: accepts the string
 */
void _print_rev_recursion(char *s)
{
	int l;

	l = strlen(s) - 1;
	pr(s, l);
}
