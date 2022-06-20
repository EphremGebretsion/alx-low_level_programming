#include "main.h"
/**
 * _memcpy - copies the specified memory area to dest
 * @dest: destination of the file to be copied
 * @src: the source of the memory
 * @n: the memory area
 * Return: the new dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
