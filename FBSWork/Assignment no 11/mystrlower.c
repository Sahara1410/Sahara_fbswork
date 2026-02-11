#include<stdio.h>
char* mystrlower(char*);
void main()
{
	char str[10];
	printf("Enter a string:");
	scanf("%s",str);
	mystrlower(str);
	printf("Lowercase:%s",str);
	
}
char* mystrlower(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
			i++;
		}
	}
	return i;
}