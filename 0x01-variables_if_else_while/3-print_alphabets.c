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
	char C = 'A';
	int i = 0;

	while (i < 26)
	{
		putchar(c);
		c++;
		i++;
	}
	i = 0;

	while (i < 26)
	{
		putchar(C);
		C++;
		i++;
	}
	putchar('\n');
	return (0);
}
