#include<stdio.h>
void main()
{
	char str[20];
	char ch;
	printf("Enter the String:");
	scanf("%s",str);
	printf("Enter character to search:");
	scanf(" %c",&ch);
	int i,flag=0;
	for(i=0;str[i]!='\0';i++){
	if(str[i]==ch){	
		flag=1;
		break;
	}
}
	if(flag==1)
		printf("Character found at index:%d",i);
	else
		printf("Character not found");
	
}