#include<stdio.h>
void main()
{
	char str[40];
	int i=0;
	printf("Enter a sentence:");
	gets(str);
	while(str[i]!=0)
	{
		if(str[i]==' ')
		{
			str[i]='#';
		}
		i++;
	}
	printf("The new sentence is:%s",str);
}