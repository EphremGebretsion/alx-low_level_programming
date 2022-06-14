#include<stdio.h>
#include "main.h"
/**
 * _islower - is used to check if its lower case or not
 * @c: accepts the charactor value
 * Return: 1 if lower case 0 otherwise
 */
int _islower(int c)
{
	int i = 0;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	i = 0;
	return (i);
}
