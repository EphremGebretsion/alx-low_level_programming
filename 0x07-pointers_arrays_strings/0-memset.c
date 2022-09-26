#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: accepts the string
 * @b: accepts the constant byte
 * @n: accpes the number
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
