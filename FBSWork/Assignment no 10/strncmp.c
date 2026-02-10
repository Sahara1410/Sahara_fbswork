#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="Hello";
	char b[]="Hello";
	if(strncmp(a,b,3)==0)
		printf("The string is equal");
	else
		printf("Not equal");
}