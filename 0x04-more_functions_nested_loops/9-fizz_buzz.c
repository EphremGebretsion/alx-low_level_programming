#include<stdio.h>
#include "main.h"
/**
 *fizz_buzz - prints fizz buzz
 */
void fizz_buzz(void)
{
	int i = 1;
	int t, f;

	while (i <= 100)
	{
		t = i % 3;
		f = i % 5;
		if ((t == 0) && (f == 0))
		{
			printf("FizzBuzz");
		}
		if (t == 0)
		{
			printf("Fizz");
		}
		if (f == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}
}
