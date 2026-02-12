#include<stdio.h>
#include<string.h>
int mystrlen(char*);
void main()
{
	char str1[50],str2[50];
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	int len1=mystrlen(str1);
	int len2=mystrlen(str2);
	if(len1>len2)
		printf("First string is greater!!!");
	else if(len2>len1)
		printf("Second string is greater!!!");
	else
		printf("Both are same!!!");
	}
int mystrlen(char* str)
{
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}
