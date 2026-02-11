#include<stdio.h>
char* mystrcat(char*,char*);
void main()
{
	char str1[20];
	char str2[20];
	printf("Enter a string:");
	scanf("%s",str1);
	printf("Enter a string:");
	scanf("%s",str2);
	mystrcat(str1,str2);
	printf("The String is:%s",str1,str2);
}
char* mystrcat(char* str1,char* str2)
{
	int i=0;
	int j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	return str1[i]='\0';
	
}