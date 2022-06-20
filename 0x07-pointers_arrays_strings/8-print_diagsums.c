#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - print the diagonal sums from both sides
 * @a: accepts the array
 * @size: accepts the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, aa;
	long int fsum = 0, bsum = 0;

	aa = size + 1;
	while (j < size)
	{
		fsum += a[i];
		i += aa;
		j++;
	}
	i = size - 1;
	aa = size - 1;
	j = 0;
	while (j < size)
	{
		bsum += a[i];
		i += aa;
		j++;
	}
	printf("%li, %li\n", fsum, bsum);
}
