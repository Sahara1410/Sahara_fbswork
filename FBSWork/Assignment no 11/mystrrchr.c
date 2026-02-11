#include<stdio.h>
char* mystrchr(char*,char,int);
void main()
{
	char str[20],ch;
	int n;
	printf("The string is:");
	scanf("%s",str);
	printf("\nEnter character to search:");
	scanf(" %c", &ch);
	printf("Enter limit:");
	scanf(" %d",&n);
	char* ptr;
	ptr=mystrchr(str,ch,n);
	if(ptr!=NULL)
		printf("Character found at index:%ld",ptr-str+1);
	else
		printf("character not found in first %d characters",n);
	
}
char* mystrchr(char* str,char ch,int n)
{
	int i;
	for(i=0;i<n && str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			return &str[i];
		}
		i++;
	}
	return NULL;
	
}
