#include<ctype.h>
#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lowercase to uppercase in a string
 * @c: used to accept the string
 * Return: returns the uper case string
 */
char *string_toupper(char *c)
{
	int i = 0, l;

	l = strlen(c);
	while (i < l)
	{
		c[i] = toupper(c[i]);
		i++;
	}
	return (c);
}
