#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Hellofbs";
	char str2[]="Inpune";
	strncat(str1,str2,6);
	printf("%s",str1);
}