#include<stdio.h>
int isPalindrome();
void main()
{
	isPalindrome()?	printf("Number is palindrome"):printf("Number is not palindrome");
}
int isPalindrome(){
int num;
	printf("Enter the number:");
	scanf("%d",&num);
if(num/100==num%10)
	return 1;
else
	return 0;
}