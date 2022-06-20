#include<string.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: accept the string that
 * @needle: accepts the string to be searched (substring)
 * Return: the substring location
 */
char *_strstr(char *haystack, char *needle)
{
	char *s;

	s = strstr(haystack, needle);
	return (s);
}
