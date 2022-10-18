#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_char - print character
 * @v: accept the var list
 * @sp: the spacing between
 */
void print_char(va_list *v, char *sp)
{
	printf("%s%c", sp, va_arg(*v, int));
}
/**
 * print_int - prints intiger
 * @v: accept the var list
 * @sp: the spacing between
 */
void print_int(va_list *v, char *sp)
{
	printf("%s%d", sp, va_arg(*v, int));
}
/**
 * print_float - prints a float
 * @v: accept the var list
 * @sp: the spacing between
 */
void print_float(va_list *v, char *sp)
{
	printf("%s%f", sp, va_arg(*v, double));
}
/**
 * print_str - prints a string
 * @v: accept the var list
 * @sp: the spacing between
 */
void print_str(va_list *v, char *sp)
{
	char *s = va_arg(*v, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sp, s);
}
/**
 * print_all - is used to print all formats
 * @format: the format of the printed text
 */
void print_all(const char * const format, ...)
{
	printer pr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};
	va_list l;
	int i;
	long unsigned int j;
	char *sp = "";
	char c;

	j = 0;
	va_start(l, format);
	while (j < strlen(format))
	{
		c = format[j];
		i = 0;
		while (i < 4)
		{
			if (c == pr[i].c)
			{
				pr[i].f(&l, sp);
				sp = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(l);
	printf("\n");
}
