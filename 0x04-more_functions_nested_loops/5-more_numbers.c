#include<stdio.h>
#include "main.h"
/**
 * more_numbers - used to print 0-14
 */
void more_numbers(void)
{
	int i = 0;
	int n = 0;
	int t, k;
	char c = '0';

	while (i < 10)
	{
		k = 10;
		t = 0;
		c = '0';

		while (t < 2)
		{
			while (n < k)
			{
				if (t == 1)
				{
					_putchar('1');
				}
				_putchar(c);
				c++;
				n++;
			}
			t++;
			k = 5;
			n = 0;
			c = '0';
		}
		_putchar('\n');
		i++;
	}
}
