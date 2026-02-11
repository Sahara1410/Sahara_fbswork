#include<stdio.h>
char* mystrcpy(char des[],char str[]);
void main()
{
	char str[]="Hello";
	char des[20];
	mystrcpy(des,str);
	printf("Copied string!!!!:%s",des);
}
char* mystrcpy(char des[],char str[])
{	
	int i=0;
	while(str[i]!='\0'){
		des[i]=str[i];
		i++;
	}
	des[i]='\0';
	return des;
}