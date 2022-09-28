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
		return (r);
	}
	if (t - r == 1)
	{
		return (r);
	}
	if (r - t == 1)
	{
		return (t);
	}
	r = (t + r) / 2;
	return (tes(x, r));
}
/**
 * check - checks if there exist a number that can devide
 * @x: accepts the number
 * @r: the root of x
 * @t: starting point to search
 * Return: 0 if there is a divisor otherwise 1
 */
int check(int x, int r, int t)
{
	int res = 1;

	if (x % t == 0)
	{
		return (0);
	}
	if (t < r)
	{
		res = check(x, r, ++t);
	}
	return (res);
}

/**
 * is_prime_number - checks if the number is prime or not
 * @n: accepts the number
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	int srt;

	if (n < 2)
	{
		return (0);
	}
	srt = tes(n, 2);

	return (check(n, srt, 2));
}
