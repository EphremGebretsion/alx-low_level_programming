#include<stdio.h>
/**
 * main - starting point
 * print the number
 * print the colen
 * print the $ sighn at the end of the line
 * Return: 0 at the end
 */
int main(void)
{
	int i = 48;
	int t;
	int c;

	while (i < 57)
	{
		putchar(i);
		t = 0;
		c = 44;

		while (t < 2)
		{
			putchar(c);
			c = 32;
			t++;
		}
		i++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
