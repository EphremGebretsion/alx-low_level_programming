#include<stdio.h>
#include "main.h"
/**
 * main - starts the process that prints the sum
 * Return: 0 at the end
 */
int main(void)
{
	int sum = 0, i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum += i;
		else if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
