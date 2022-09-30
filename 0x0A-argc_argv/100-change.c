#include<stdio.h>
#include<stdlib.h>
/**
 * min - calculates the minimum changes
 * @c: accept the total change
 * Return: the minimum number of changes
 */
int min(int c)
{
	int count = 0, rem = c;

	if (rem >= 25)
	{
		count = rem / 25;
		rem = rem % 25;
	}
	if (rem >= 10)
	{
		count += rem / 10;
		rem = rem % 10;
	}
	if (rem >= 5)
	{
		count += rem / 5;
		rem = rem % 5;
	}
	if (rem >= 2)
	{
		count += rem / 2;
		rem = rem % 2;
	}
	count += rem;
	return (count);
}
/**
 * main - prints the program name
 * @argc: is used to count the arguments
 * @argv: is used to store the arguments in a string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int change;

	if (argc == 2)
	{
		change = atoi(argv[1]);
		if (change < 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", min(change));
		return (0);
	}
	printf("Error\n");
	return (1);
}
