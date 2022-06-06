#include<stdio.h>
/**
 * main - start
 * display fom 1 to 9
 * then display from a to f
 * Return: 0 at the end
 */
int main(void)
{
	int i = 48;
	char c = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
