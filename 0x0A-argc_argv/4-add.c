#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * check - checks if it is a number or not
 * @s: accepts the string
 * Return: 0 if a number, 1 otherwise
 */
int check(char *s)
{
	int l = strlen(s);
	int i = 0;

	while (i < l)
	{
		if (s[i] > 57 || s[i] < 48)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * main - prints the the sum
 * @argc: is used to count the arguments
 * @argv: is used to store the arguments in a string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, a;

	while (i < argc)
	{
		a = atoi(argv[i]);
		if (check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (a < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
