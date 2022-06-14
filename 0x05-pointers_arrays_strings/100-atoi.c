#include<stdlib.h>
#include<string.h>
/**
 * _atoi - converts the string to int
 * @s: is used to accept the string
 * Return: returns the in value
 */
int _atoi(char *s)
{
	char y[]="----------------";
	int l = strlen(s);
	int i = 0;
	int c = 0;
	int ii = 0;
	int in;
	while(i < l )
	{
		if (s[i] == '-')
		{
			c++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (c % 2 == 1)
			{
				y[ii]= '-';
				ii++;
			}
			while (s[i] >= 48 && s[i] <= 57 && i < l)
			{
				y[ii] = s[i];
				ii++;
				i++;
			}
			i = l+1;
		}
		i++;
	}
	in = atoi(y);
	return (in);
}
