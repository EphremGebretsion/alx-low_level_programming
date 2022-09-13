#include<stdio.h>
#include "main.h"
/**
 * fib - returns the fibonachi number
 * @f: used to accept the number
 * Return: returns the calculated number
 */
long int fib(int f)
{

	if (f == 0)
	{
		return (0);
	}
	else if (f == 1)
	{
		return (1);
	}
	else
	{
	return (fib(f - 1) + fib(f - 2));
	}
}
/**
 * main - used to print the fibonachi
 * Return: 0 at the end
 */
int main(void)
{
	int i = 0, n = 2;

	while (i < 50)
	{
		printf("%li", fib(n));
		if (i < 49)
			printf(", ");
		i++;
		n++;
	}
	printf("\n");
	return (0);
}
