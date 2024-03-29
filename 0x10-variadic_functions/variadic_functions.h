#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct prin - stors the symbol and the function to print
 * @c: stors the symbol
 * @f: the function for the symbol
 */
typedef struct prin
{
	char *c;
	void (*f)(va_list *, char *);
} printer;
#endif
