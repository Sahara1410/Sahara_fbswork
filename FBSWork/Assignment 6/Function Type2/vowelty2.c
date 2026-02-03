#include<stdio.h>
char vowel();
void main()
{
	vowel()?printf("This is Vowel"):printf("This is not vowel");
}
char vowel(){
char ch;
printf("Enter the character:");
scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E' || ch=='O'|| ch=='I'|| ch=='U')
		return 1;
	else
		return 0;
}