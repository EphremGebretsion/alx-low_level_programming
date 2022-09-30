#include<stdio.h>
/**
 * main - prints the program name
 * @argc: is used to count the arguments
 * @argv: is used to store the arguments in a string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
