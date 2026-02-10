#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloFBS";
	char *ptr;
	ptr=strrchr(str,'B',6);
	if(ptr!=NULL)
		printf("Charcter found");
	else
		printf("Not found");
}