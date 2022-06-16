#include<string.h>
#include "main.h"
/**
 * leet - convert to 1337(leet)
 * @s: accept the string
 * Return: the converted string
 */
char *leet(char *s)
{
	int i = 0, l;

	l = strlen(s);
	while (i < l)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
		i++;
	}
	return (s);
}
