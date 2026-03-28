#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Welcome to FirstBit";
	printf("The string is:%s",str);
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{	
		if(str[i]!=' ')
		{
		if(i==0||str[i-1]==' ')	
		count++;
	}
	i++;
	}
	printf("\nTotal no of words in string :%d",count);
}