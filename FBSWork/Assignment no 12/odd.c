#include<stdio.h>
void main()
{
	char str[50];
	printf("Enter a string:");
	scanf("%s",str);
	int i,j=0;
	for(i=0;str[i]!='\0';i+=2)
	{
		str[j]=str[i];
		j++;
	}
	str[j]='\0';
	printf("New string is:%s",str);
}