#include <variadic_functions.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_list ars;

	va_start(ars, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ars, int);
	}
	va_end(ars);

	return (sum);
}
