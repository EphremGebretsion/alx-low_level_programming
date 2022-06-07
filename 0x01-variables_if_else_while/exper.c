#include<stdio.h>
/**
 * main - starting point
 * work the first two sets
 * nest the second two sets in to the first one
 * Return: 0 at the end
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int t, n, c, d;

	while (a < 58)
	{
		while (b < 58)
		{
			c = a; 
			d = b + 1;

			while (c < 58)
			{
				while (d < 58)
				{
					t = 0;
					n = a;
					while (t < 2)
					{
						putchar(n);
						t++;
						n = b;
					}
					putchar(' ');
					t = 0;
					n = c;
					while (t < 2)
					{
						putchar(n);
						n = d;
						t++;
					}
					if (!(a == 57 && b == 56 && c == 57 && d == 57))
					{
						t = 0;
						n = 44;
						while (t < 2)
						{
							putchar(n);
							n = 32;
							t++;
						}
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = 48;
		}
		b = 48;
		a++;
	}
	putchar('\n');
	return (0);
}
