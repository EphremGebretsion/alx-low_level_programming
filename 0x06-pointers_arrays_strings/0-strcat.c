#include<string.h>
#include "main.h"
/**
 * _strcat - used to concatinate the two strings
 * @dest: accept the first string
 * @src: accept the second string
 * Return: returns the concatinated string
 */
char *_strcat(char *dest, char *src)
{
	char *s;

	s = strcat(dest, src);
	return (s);
}
