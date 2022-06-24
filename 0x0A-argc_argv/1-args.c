#include<stdio.h>
/**
 * main - prints the number of arguments
 * @argc: counts the number of arguments
 * @argv: stores the arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argv[argc - 1] != NULL)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
