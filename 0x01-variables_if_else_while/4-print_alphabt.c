#include<stdio.h>
/**
 * main - is where all starts
 * create the variables
 * while loop
 * Return: 0 all done
 */
int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
