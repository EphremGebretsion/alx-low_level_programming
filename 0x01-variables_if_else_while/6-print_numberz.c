#include<stdio.h>
/**
 * main -start of all
 * print all the 0 to 9 numbers
 * Return: 0 at the end of all this
 */
int main(void)
{
	int i = 0;
	int x = 48;

	while (i < 10)
	{
		putchar(x);
		i++;
		x++;
	}
	putchar('\n');
	return (0);
}
