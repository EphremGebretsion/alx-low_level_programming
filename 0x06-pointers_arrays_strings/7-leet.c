#include<string.h>
#include "main.h"
/**
 * check - ckeks conditions and returns defoult or result
 * @up: accept the uppercase character
 * @low: accept lowercase character
 * @def: accept the defoult value
 * @res: accept the new desired value
 * Return: def or res depending on the check
 */
char check(char up, char low, char def, char res)
{
	int i = 0;
	char c, r;

	c = low;
	r = def;
	while (i < 2)
	{
		if (def == c)
			r = res;
		i++;
		c = up;
	}
	return (r);
}
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
		s[i] = check('A', 'a', s[i], '4');
		s[i] = check('E', 'e', s[i], '3');
		s[i] = check('O', 'o', s[i], '0');
		s[i] = check('T', 't', s[i], '7');
		s[i] = check('L', 'l', s[i], '1');
		i++;
	}
	return (s);
}
