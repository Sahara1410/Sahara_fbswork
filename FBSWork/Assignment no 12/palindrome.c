#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	printf("Enter a string:");
	scanf("%s",str);
	char temp[10];
	strcpy(temp,str);
	strrev(str);
	strcmp(strrev(str),strdup(str))==0 ? printf("String is Palindrome"):printf("String is not palindrome");
}