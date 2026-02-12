#include<stdio.h>
void main(){
	char str[30];
	printf("Enter a string:");
	scanf("%s",str);
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='I'||str[i]=='U')
		{
			count++;
		}
		i++;
	}
	printf("The Vowels are:%d",count);
}