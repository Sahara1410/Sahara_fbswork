#include<stdio.h>
char* mystrcmp(char a[],char b[]);
void main()
{
	char a[]="Hello";
	char b[]="Hello";
	(mystrcmp(a,b)==0)?printf("The string is equal"):printf("Not equal");
}
char* mystrcmp(char a[],char b[])
{
	int i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]!=b[i]){
			a[i]-b[i];
			}
		i++;
			
	}
	return a[i]-b[i];
}