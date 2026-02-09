#include<stdio.h>
void vowel(char ch[]);
void main()
{
	char ch[1];
	printf("Enter the character:");
	scanf("%c",&ch);
	vowel(ch);
}
void vowel(char ch[]){
	if(ch[0]=='a'|| ch[0]=='e'|| ch[0]=='i'|| ch[0]=='o'|| ch[0]=='u'|| ch[0]=='A'|| ch[0]=='E' || ch[0]=='O'|| ch[0]=='I'|| ch[0]=='U')
		printf("This is Vowel");
	else
		printf("This is not vowel");
}