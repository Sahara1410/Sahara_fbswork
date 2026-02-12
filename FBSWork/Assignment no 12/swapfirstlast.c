#include<stdio.h>
void main(){
	char str[30];
	printf("Enter a string:");
	scanf("%s",str);
	int i=0;
	int temp;
	while(str[i]!='\0')
	{
		i++;		
	}
	temp=str[0];
		str[0]=str[i-1];
		str[i-1]=temp;
	printf("After swapping:%s",str);
}