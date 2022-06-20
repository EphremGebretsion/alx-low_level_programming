#include "main.h"
#include<string.h>
/**
 * _strchr - locates the character in string
 * @s: accepts the string
 * @c: accepts the character to be searched
 * Return: the character location in the string
 */
char *_strchr(char *s, char c)
{
	int i = 0, l;

	l = strlen(s);
	if (c == '\0')
	{
		return (&s[l]);
	}
	while (i < l)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
