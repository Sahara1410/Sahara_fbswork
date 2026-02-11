#include<stdio.h>
char* mystrupper(char*);
void main()
{
	char str[10];
	printf("Enter a string:");
	scanf("%s",str);
	mystrupper(str);
	printf("Uppercase:%s",str);
	
}
char* mystrupper(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
			i++;
		}
	}
	return i;
}