#include "main.h"
/**
 * tes - tests for the square root
 * @x: accepts the number assumed to be a perfect square
 * @t: the root value to be tested
 * Return: returns the root if not found return -1
 */
int tes(int x, int t)
{
	int r;

	r = x / t;
	if (x == 1)
	{
		return (1);
	}
	if (x < 0)
	{
		return (-1);
	}
	if (r == t)
	{
		if (r * t == x)
		{
			return (r);
		}
		return (-1);
	}
	r = (t + r) / 2;
	return (tes(x, r));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: accepts the number
 * Return: the value of the square root
 */
int _sqrt_recursion(int n)
{
	return (tes(n, 2));
}
