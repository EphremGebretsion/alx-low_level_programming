#include<stdio.h>
#include "main.h"
/**
 * _isupper -is the function for upercase cheking
 * @c: is used for accepting the character
 *
 * check if it is upper or other
 * Return: 1 if its true or else 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
