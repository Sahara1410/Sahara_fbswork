#include<stdio.h>
void main()
{
	char str[30];
	int i,index;
	printf("Enter the string:");
	scanf("%s",str);
	printf("Enter index to remove:");
	scanf("%d",&index);
	for(i=index;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("String after remove index:%s",str);
	
	
}