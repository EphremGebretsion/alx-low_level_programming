#include<stdio.h>
#include "main.h"
/**
 * _isalpha - checks if its alphabet
 * @c: accepts the character
 * Return: 1 if it is alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
