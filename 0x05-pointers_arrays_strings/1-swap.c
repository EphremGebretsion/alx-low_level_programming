#include "main.h"
/**
 * swap_int - is used to swap the two intiger values
 * @a: will accept the first int reference
 * @b: will accept the second int reference
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
