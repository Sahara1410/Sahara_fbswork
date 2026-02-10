#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="C,C++,JAVA,PYTHON\n";
	printf("%s",str);
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==',')
			printf("\n");
		else
			printf("%c",str[i]);
	}
	
}