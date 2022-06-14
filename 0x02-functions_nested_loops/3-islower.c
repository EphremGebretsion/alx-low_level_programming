#include<stdio.h>
#include "main.h"
/**
 * _islower - is used to check if its lower case or not
 * @c: accepts the charactor value
 * Return: 1 if lower case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
