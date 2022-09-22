#include<string.h>
#include "main.h"
/**
 * check - checks if it is between l and u then return s or def
 * @l: accept the lower 'a' or 'A'
 * @u: accept the middle 'n' or 'N'
 * @U: accept the upper 'z' or 'Z'
 * @def: defoult character and character to be checked
 * Return: the shifted character
 */
char check(int l, int u, int U, char def)
{
	char r = def;

	if (def >= l && def < u)
		r = def + 13;
	while ((def >= u && def <= U))
	{
		r = def - 13;
		break;
	}
	return (r);
}
/**
 * rot13 - changes a string to rot13
 * @ss: accepts the string
 * Return: return the rot13 format
 */
char *rot13(char *ss)
{
	int i = 0, l;

	l = strlen(ss);
	while (i < l)
	{
		ss[i] = check(97, 110, 122, ss[i]);
		ss[i] = check(65, 78, 90, ss[i]);
		i++;
	}
	return (ss);
}
