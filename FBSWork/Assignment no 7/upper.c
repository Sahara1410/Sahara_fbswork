#include<stdio.h>
void upper(char*);
void main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	upper(&ch);
}
void upper(char*ch){
	if(*ch>='A'&& *ch<='Z')
		printf ("This is Uppercase");
	else
		printf("This is lowercase");
}