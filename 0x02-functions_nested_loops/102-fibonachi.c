#include<stdio.h>
#include "main.h"
/**
 * fib - returns the fibonachi number
 * @f: used to accept the number
 * Return: returns the calculated number
 */
int fib(int f)
{
	int r;

	if (f == 0)
		r = 0;
	else if (f == 1)
		r = 1;
	else
		r = fib(f - 2) + fib(f - 1);
	return (r);
}
/**
 * main - used to print the fibonachi
 * Return: 0 at the end
 */
int main(void)
{
	int i = 0, f = 2;

	while (i < 50)
	{
		printf("%i", fib(f));
		if (i < 49)
			printf(", ");
		i++;
		f++;
	}
	printf("\n");
	return (0);
}
