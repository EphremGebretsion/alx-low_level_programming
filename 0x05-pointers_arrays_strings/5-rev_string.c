#include<string.h>
#include "main.h"
void rev_string(char *s)
{
	char r[] = s;
	int l = strlen(s) - 1;
	int i = 0;
	
	while (l >= 0)
	{
		s[i] = r[l];
		i++;
		l--;
	}
}
