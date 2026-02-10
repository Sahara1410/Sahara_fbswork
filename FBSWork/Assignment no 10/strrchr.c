#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloFBS";
	char *ptr;
	ptr=strrchr(str,'o');
	if(ptr!=NULL)
		printf("Found:%s",ptr);
	else
		printf("Not found");
}