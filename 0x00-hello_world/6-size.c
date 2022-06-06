#include<stdio.h>
/**
 * main - starts the program
 * print size of char
 * print size of int
 * print size of long int
 * print size of long long int
 * print size of float
 * Return: return 0 after all that 
 */
int main(void)
{
	char C;
	int I;
	long int LI;
	long long int LLI;
	float F;
	printf("Size of a char: %li byte(s)\n",sizeof(C));
        printf("Size of an int: %li byte(s)\n",sizeof(I));
	printf("Size of a long int: %li byte(s)\n",sizeof(LI));
	printf("Size of a long long int: %li byte(s)\n",sizeof(LLI));
	printf("Size of a float: %li byte(s)\n",sizeof(F));
        return (0);
}	
