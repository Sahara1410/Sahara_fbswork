#include<stdio.h>
char* mystrlen(char str[]);
void main()
{
	char str[]="Hello";
	printf("The string length is:%d",mystrlen(str));
}
char* mystrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}