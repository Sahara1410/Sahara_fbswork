#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i=0,words=0;
	printf("Enter a sentence:");
	gets(str);
	if(str[0]!='\0')
		words=1;	
	while(str[i]!='\0')
		{
			if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
			{
				words++;
			}
			i++;
		}
	printf("Number of words in this sentence:%d",words);
	
}