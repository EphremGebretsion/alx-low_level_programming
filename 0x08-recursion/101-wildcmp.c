#include "main.h"
#include<string.h>
/**
 * comps - compares the strings
 * @i: accepts the index
 * @s: accepts the first string
 * @ss: accepts the second string
 * @l: accepts the string length
 * Return: 1 if identical, 0 otherwise
 */
int comps(int i, char *s, char *ss, int l)
{
	int res = 1;

	if (i < l)
	{
		if (s[i] != ss[i])
		{
			return (0);
		}
		res = comps(++i, s, ss, l);
	}
	return (res);
}
/**
 * wildcmp - compares the two strings
 * @s1: accept the first string
 * @s2: accept the second string
 * Return: 1 if they are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int l, L;

	l = strlen(s1);
	L = strlen(s2);

	if (l != L)
	{
		return (0);
	}
	return (comps(0, s1, s2, l));

}
