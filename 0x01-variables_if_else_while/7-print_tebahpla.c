#include<stdio.h>
/**
 * main - start
 * print all the numbers in reverse order
 * print new line
 * Return: 0 at the end
 */
int main(void)
{
	int i = 26;
	char c = 'z';

	while (i > 0)
	{
		putchar(c);
		c--;
		i--;
	}
	putchar('\n');
	return (0);
}
