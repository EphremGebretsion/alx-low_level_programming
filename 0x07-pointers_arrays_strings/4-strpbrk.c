#include "main.h"
#include<string.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: accepts the string
 * @accept: the strings being searched
 * Return: the address of the string theat is fond
 */
char *_strpbrk(char *s, char *accept)
{
	char *i;

	i = strpbrk(s, accept);
	return (i);
}
