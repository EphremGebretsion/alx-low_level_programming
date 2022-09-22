#include<string.h>
#include "main.h"
/**
 * _strcmp - used to compare the two strings
 * @s1: accepts the first string
 * @s2: accepts the second string
 * Return: 1 if greater, -1 if smaller, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	r = strcmp(s1, s2);
	return (r);
}
