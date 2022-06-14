#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - check for random number
 * Return: zero at the end
 */
int main(void)
{
	int nu;
	srand(time(NULL));
	nu = rand();
	printf("%i",nu);
	return (0);
}
