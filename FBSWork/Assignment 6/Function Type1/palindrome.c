#include<stdio.h>
void isPalindrome();
void main()
{
	isPalindrome();
}
void isPalindrome(){
int num;
	printf("Enter the number:");
	scanf("%d",&num);
if(num/100==num%10)
	printf("Number is palindrome");
else
	printf("Number is not palindrome");
}