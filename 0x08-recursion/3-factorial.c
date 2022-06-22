#include "main.h"
/**
 * factorial - returns the factorial of the given number
 * @n: accepts the number
 * Return: returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
