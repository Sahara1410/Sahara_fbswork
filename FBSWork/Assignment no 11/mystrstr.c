#include<stdio.h>
char* mystrstr(char*, char*);
void main() {
	char str1[20],str2[20];
	printf("Enter string: ");
	scanf("%s",str1);
	printf("Enter substring: ");
	scanf("%s",str2);
	char* result = mystrstr(str1,str2);
	if(result !=NULL)
		printf("Substring found at position: %ld", result-str1 + 1);
	else
		printf("Substring not found");
}
char* mystrstr(char* str1, char* str2) {
	int i,j;
	for(i=0; str1[i]!='\0';i++) {
		j=0;
		while(str2[j] != '\0' && str1[i+j] == str2[j]) {
			j++;
		}
		if(str2[j] == '\0') 
			return &str1[i];
	}
	return NULL;
}
