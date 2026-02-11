#include<stdio.h>
char* mystrncat(char*, char*, int);
void main()
{
    char str1[20], str2[20];
    int n;
	printf("Enter first string: ");
    scanf("%s", str1);
	printf("Enter second string: ");
    scanf("%s", str2);
	printf("Enter number of characters to append: ");
    scanf("%d", &n);
	mystrncat(str1, str2, n);
	printf("New string is: %s", str1);
}
char* mystrncat(char* str1, char* str2, int n)
{
    int i=0, j=0;
	while(str1[i] != '\0')
        i++;
    while(j < n && str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
	str1[i] = '\0';
	return str1;
}
