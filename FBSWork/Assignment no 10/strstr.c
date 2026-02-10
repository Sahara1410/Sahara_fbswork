#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello FBS in FC";
	printf("%s",str);
	char *sstr;
	sstr=strstr(str,"in");
	if(sstr!=NULL)
		printf("\nFound:%s",sstr);
	else
		printf("Not found");
}