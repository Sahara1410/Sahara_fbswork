#include<stdio.h>
void vowel();
void main()
{
	vowel();
}
void vowel(){
char ch;
printf("Enter the character:");
scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E' || ch=='O'|| ch=='I'|| ch=='U')
		printf("This is Vowel");
	else
		printf("This is not vowel");
}