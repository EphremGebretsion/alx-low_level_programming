#include<stdio.h>
#include "main.h"
/**
 * _isdigit - is used to check if it is a digit in char value
 * @c: is used to accept the char value in digit form
 *
 * Return: 1 if it is between 0-9 else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
