#include<stdio.h>
/**
 * main - starting point
 * check for every possible value starting with zeroo
 * print them
 * check for every possible value starting with n-1
 * print them
 * Return: 0 at the end
 */
int main(void)
{
	int i = 48;
	int s, t, c, n;

	while (i < 57)
	{
		s = i + 1;
		while (s < 58)
		{
			t = 0;
			n = i;
			while (t < 2)
			{
				putchar(n);
				n = s;
				t++;
			}
			t = 0;
			c = 44;
			if (!(i == 56 && s == 57))
			{
			while (t < 2)
			{
				putchar(c);
				c = 32;
				t++;
			}
			}
			s++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

