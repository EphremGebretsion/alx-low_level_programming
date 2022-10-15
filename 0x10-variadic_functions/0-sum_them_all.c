#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of argumets
 * @n: number of arguments
 * Return: returns the result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ars;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ars, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ars, int);
	}
	va_end(ars);

	return (sum);
}
