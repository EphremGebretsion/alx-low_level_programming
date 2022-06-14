#include<string.h>
/**
 * _atoi - converts the string to int
 * @s: is used to accept the string
 * Return: returns the in value
 */
int _atoi(char *s)
{
	int l = strlen(s);
	int i = 0;
	int c = 0;
	int sum = 0;

	while (i < l)
	{
		if (s[i] == '-')
		{
			c++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57 && i < l)
			{
				sum = (sum * 10) + (s[i] - 48);
				i++;
			}
			i = l;
		}
		i++;
	}
	if (c % 2 == 1)
	{
		sum = -sum;
	}
	return (sum);
}
