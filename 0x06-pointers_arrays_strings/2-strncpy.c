#include<string.h>
#include "main.h"
/**
 * _strncpy - copies the specified amout of characters
 * @dest: accepts the first string
 * @src: accepts the second string
 * @n: accepts the character amount
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s;

	s = strncpy(dest, src, n);
	return (s);
}
