#include "3-calc.h"

/**
 * op_add - add the number and return the result
 * @a: accept the first number
 * @b: accept the second number
 * Return: the result of the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - is used to calculate the diference of the two numbers
 * @a: accept the first number
 * @b: accept the second number
 * Return: return the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - is used to calculate the multiplication of the numbers
 * @a: used to accept the first number
 * @b: used to accept the second numer
 * Return: return the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - is used to divide a by b
 * @a: accept the first number
 * @b: accept the second number
 * Return: the result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - is used to calculate the remainder
 * @a: accept the first number
 * @b: accept the second number
 * Return: return the result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
