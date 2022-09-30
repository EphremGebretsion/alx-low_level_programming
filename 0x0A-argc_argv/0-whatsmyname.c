#include<stdio.h>
/**
 * main - prints the program name
 * @argc: is used to count the arguments
 * @argv: is used to store the arguments in a string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

