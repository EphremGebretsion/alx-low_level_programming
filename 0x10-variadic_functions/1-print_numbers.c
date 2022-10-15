#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - print the numbers with the separetor in between
 *@separator: separets the numbers
 *@n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ars;

	va_start(ars, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ars, int));
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(ars);
}
