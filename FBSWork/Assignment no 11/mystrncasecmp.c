#include<stdio.h>
int mystrncasecmp(char*, char*, int);
void main()
{
    char str1[50], str2[50];
    int n;
	printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
	printf("Enter number of characters to compare: ");
    scanf("%d", &n);
	if(mystrncasecmp(str1, str2, n) == 0)
        printf("Equal upto %d characters", n);
    else
        printf("Not Equal");
}
int mystrncasecmp(char* str1, char* str2, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        char c1 = str1[i];
        char c2 = str2[i];
        if(c1 == '\0' || c2 == '\0')
            return c1 - c2;
        if(c1 >= 'A' && c1 <= 'Z')
            c1=c1+32;
		if(c2 >= 'A' && c2 <= 'Z')
            c2=c2+32;
		if(c1 != c2)
            return c1 - c2;
    }

    return 0;
}
