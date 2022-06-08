#ifndef HEADER_FILE
#define HEADER_FILE
#include<stdio.h>
void _putchar(char s[])
{
	for(int i=0;s[i] != '\0';i++){
		putchar(s[i]);
	}
}
#endif
