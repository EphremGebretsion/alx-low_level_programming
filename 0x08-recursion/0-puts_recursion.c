#include "main.h"
/**
 * _puts_recursion - prints the string followed by a new line
 * @s: accepts the string
 */
void _puts_recursion(char *s)
{
	char c = s[0];

	if (c != '\0')
	{
		_putchar(c);
		_puts_recursion(&s[1]);
	}
	else
	_putchar('\n');
}
