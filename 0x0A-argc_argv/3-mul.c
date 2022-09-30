#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the program name
 * @argc: is used to count the arguments
 * @argv: is used to store the arguments in a string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%i\n", a * b);
	return (0);
}
