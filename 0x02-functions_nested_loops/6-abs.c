#include<stdio.h>
#include "main.h"
/**
 * _abs - returns the absolute value
 * @n: accepts the number
 * Return: returns the posetive version of every number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
