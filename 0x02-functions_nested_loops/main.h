#ifndef HEADER_FILE
#define HEADER_FILE
#include<stdio.h>
void _putchar(char s[])
{
	int i = 0;
	while(s[i] != '\0'){
		putchar(s[i]);
		i++;
	}
}
#endif
