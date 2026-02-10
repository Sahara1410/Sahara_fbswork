#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloSahara";
	char *p=strdup(str);
	printf("%s",p);
}