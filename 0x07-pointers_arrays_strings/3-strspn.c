#include "main.h"
#include<string.h>
/**
 * _strspn - finds the length of prefix that contains the substrings
 * @s: accepts the string
 * @accept: accepts the string to be compared
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	i = strspn(s, accept);
	return (i);
}
