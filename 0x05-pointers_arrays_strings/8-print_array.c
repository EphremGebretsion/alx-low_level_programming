#include<stdio.h>
#include "main.h"
/**
 * print_array - print the specified number of elements in the array starting from the first
 * @a: used to accept the array
 * @n: used to accept the ammount
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%i",a[i]);
		i++;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
