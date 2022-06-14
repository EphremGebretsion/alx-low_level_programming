#include<string.h>
#include "main.h"
/**
 * rev_string - is used to reverse the string
 * @s: accepts the string val
 */
void rev_string(char *s)
{
	char swap;
	int l = strlen(s) - 1;
	int i = 0;

	while (i <= l)
	{
		swap = s[i];
		s[i] = s[l];
		s[l] = swap;
		i++;
		l--;
	}
}
