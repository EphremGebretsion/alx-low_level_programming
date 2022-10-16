#include "function_pointers.h"

/**
 * print_name - is used to call the print name funtions usint the name
 * @name: is the name
 * @f: is the function used to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
