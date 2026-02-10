#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Hellofbs";
	char des[10];
	strncpy(des,str,6);
	des[10]='\0';
	printf("%s",des);
}