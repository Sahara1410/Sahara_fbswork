#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	printf("Enter a string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
	if(str[i]=='a'){
		str[i]='$';
	}
	i++;
}
printf("The modified string is:%s",str);
	
}