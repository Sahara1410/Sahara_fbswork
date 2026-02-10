#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloFBS";
	char *ptr;
	ptr=strchr(str,'B');
	if(ptr!=NULL)
		printf("Charcter found");
	else
		printf("Not found");
}