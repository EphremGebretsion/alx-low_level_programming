#include<string.h>
#include<ctype.h>
#include "main.h"
/**
 * cap_string - capitalize the first words
 * @s: accepts the string
 * Return: returns the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, l;
	char c;

	l = strlen(s);
	while (i < l)
	{
		if (i == 0)
			s[i] = toupper(s[i]);
		else
		{
			c = s[i - 1];
			if (c == ' ' || c == '\n' || c == ',' || c == ';' || c == '.'
					|| c == '!' || c == '?' || c == '"' || c == '('
					|| c == ')' || c == '{' || c == '}' || c == '\t')
			{
				s[i] = toupper(s[i]);
			}
		}
		i++;
	}
	return (s);
}
