#include<string.h>
#include "main.h"
/**
 * _strncat - concatinate the specified amount of caracters from the second
 * @dest: accepts the first string
 * @src: accepts the second string
 * @n: accepts the number of characters
 * Return: returns the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s;

	s = strncat(dest, src, n);
	return (s);
}
