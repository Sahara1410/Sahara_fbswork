#include<stdio.h>
char* mystrchr(char*,char);
void main()
{
	char str[20],ch;
	printf("The string is:");
	scanf("%s",str);
	printf("\nEnter character to search:");
	scanf(" %c", &ch);
	char* ptr;
	ptr=mystrchr(str,ch);
	if(ptr!=NULL)
		printf("Character found at index:%d",ptr-str+1);
	else
		printf("character not found");
	
}
char* mystrchr(char* str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return &str[i];
		}
		i++;
	}
	return NULL;
	
}