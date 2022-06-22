#include "main.h"
#include<string.h>
/**
 * check - compares the two half of the string
 * @s: accept the string
 * @i: accept the bigining of the string
 * @l: accept the last index of the string
 * Return: 1 if they match otherewise return 0
 */
int check(char *s, int i, int l)
{
	int res = 1;

	if (i <= l)
	{
		if (s[i] != s[l])
		{
			return (0);
		}
		res = check(s, ++i, --l);
	}
	return (res);
}


/**
 * is_palindrome - checks if a tring is a palandrome
 * @s: accepts the string
 * Return: return 1 if palandrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen(s) - 1;
	return (check(s, 0, l));
}
