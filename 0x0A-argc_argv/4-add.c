#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
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
		if (a == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
