#include<string.h>
#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: used to accept the copy destination
 * @src: used to accept the string being copied
 * Return: the final dest value
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
