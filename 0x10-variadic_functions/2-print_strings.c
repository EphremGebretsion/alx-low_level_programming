#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints the strings separated by the separator
 * @separator: separats the strings
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ars;

	va_start(ars, n);
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(ars, char *));
			if (separator != NULL && (i < (n - 1)))
				printf("%s", separator);
		}
	va_end(ars);
	printf("\n");
}
