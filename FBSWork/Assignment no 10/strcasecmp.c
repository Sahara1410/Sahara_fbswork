#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Hellofbs";
	char str2[]="hellofbs";
	printf("%d",strcasecmp(str1,str2));
}