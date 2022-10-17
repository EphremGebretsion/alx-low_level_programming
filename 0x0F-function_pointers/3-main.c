#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - accept the numbers and the operation and return the result
 * @argc: the number of arguments
 * @argv: the array of argumets
 * Return: the result of the functions
 */
int main(int argc, char *argv[])
{
	char *ope;
	char c, l;
	int res, f, s;
	int (*calculator)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	ope = argv[2];
	c = ope[0];
	l = ope[1];
	if ((c != '+' && c != '-' && c != '*' && c != '/' && c != '%') || l != '\0')
	{
		printf("Error");
		exit(99);
	}
	f = atoi(argv[1]);
	s = atoi(argv[3]);
	if ((c == '/' || c == '%') && (s == 0))
	{
		printf("Error");
		exit(100);
	}
	calculator = get_op_func(ope);
	res = calculator(f, s);
	printf("%d\n", res);
	return (0);
}
