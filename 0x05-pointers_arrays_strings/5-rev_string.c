#include<string.h>
#include "main.h"
void rev_string(char *s)
{
	int l = strlen(s);
	char r[l];
	l--;
	int i = 0;
	
	while (l >= 0)
	{
		r[i] = s [l];
		i++;
		l--;
	}
	i = 0;
	while (i < strlen(s))
	{
		s[i] = r [i];
		i++;
	}
}
