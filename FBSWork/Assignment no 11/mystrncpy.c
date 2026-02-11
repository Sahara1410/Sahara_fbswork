#include<stdio.h>
char* mystrcpy(char*,char*,int );
int main()
{
	char str[]="Hello";
	char des[20];
	mystrcpy(des,str,4);
	printf("Copied n number string!!!!:%s",des);
	return 0;
}
char* mystrcpy(char* des,char* str,int n)
{	
	int i=0;
	while(str[i]!='\0'&& i<n){
		des[i]=str[i];
		i++;
	}
	des[i]='\0';
	return des;
}