#include<stdio.h>
int mystrcasecmp(char*, char*);
int main() 
{
	char str1[10];
	char str2[10];
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	(mystrcasecmp(str1,str2)==0)?printf("Equal"):printf("Not Equal");
	return 0;
}
int mystrcasecmp(char* str1, char* str2) {
	int i=0;
	while(str1[i] && str2[i]) {
		if(str1[i]>='A' && str1[i]<='Z')
			str1[i]+=32;
		if(str2[i]>='A' && str2[i]<='Z')
			str2[i]+=32;
		if(str1[i]!=str2[i])
			return str1[i]-str2[i];
		i++;
	}
	return str1[i]-str2[i];
}


