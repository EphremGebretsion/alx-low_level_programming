#include<string.h>
#include "main.h"
/**
 * reverse_array - is used to reverse the array
 * @a: accepts the array
 * @n: accepts the array size
 */
void reverse_array(int *a, int n)
{
	int s, i = 0, j;

	j = n - 1;
	while (i < (n / 2))
	{
		s = a[i];
		a[i] = a[j];
		a[j] = s;
		i++;
		j--;
	}
}
