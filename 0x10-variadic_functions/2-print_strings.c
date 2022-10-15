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
	char *tem;

	va_start(ars, n);
		for (i = 0; i < n; i++)
		{
			tem = va_arg(ars, char *);
			if (tem == NULL)
				printf("(nil)");
			else
				printf("%s", tem);
			if (separator != NULL && (i < (n - 1)))
				printf("%s", separator);
		}
	va_end(ars);
	printf("\n");
}
