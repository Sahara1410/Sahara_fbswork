#include<stdio.h>
void upper(char ch[]);
void main()
{
	char ch[1];
	printf("Enter the character:");
	scanf("%c",&ch);
	upper(ch);
}
void upper(char ch[]){
	if(ch[0]>='A'&& ch[0]<='Z')
		printf ("This is Uppercase");
	else
		printf("This is lowercase");
}