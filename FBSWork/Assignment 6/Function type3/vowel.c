#include<stdio.h>
void vowel(char);
void main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	vowel(ch);
}
void vowel(char ch){
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E' || ch=='O'|| ch=='I'|| ch=='U')
		printf("This is Vowel");
	else
		printf("This is not vowel");
}