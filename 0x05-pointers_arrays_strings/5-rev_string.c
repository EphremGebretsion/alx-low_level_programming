#include<string.h>
#include "main.h"
/**
 * rev_string - is used to reverse the string
 * @s: accepts the string val
 */
void rev_string(char *s)
{
	const int l = strlen(s);
	char r[l];
	int L = l - 1;
	int i = 0;

	while (L >= 0)
	{
		r[i] = s[L];
		i++;
		L--;
	}
	i = 0;
	while (i < l)
	{
		s[i] = r[i];
		i++;
	}
}
