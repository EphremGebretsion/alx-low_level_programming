#include "main.h"
/**
 * check - check to find the terminating string
 * @s: accept the string
 * @n: accept which index to search
 * Return: the index at which '\0' is found
 */
int check(char *s, int n)
{
	int len = n;

	if (s[n] != '\0')
	{
		len = check(s, n + 1);
	}
	return (len);
}

/**
 * _strlen_recursion - returnes the string length
 * @s: accept the string
 * Return: returns the length
 */
int _strlen_recursion(char *s)
{
	int l;

	l = check(s, 0);
	return (l);
}
