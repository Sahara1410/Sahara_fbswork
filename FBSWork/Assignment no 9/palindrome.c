#include<stdio.h>
void isPalindrome(int num[]);
void main()
{
    int num[1];
	printf("Enter the number:");
	scanf("%d",&num);
	isPalindrome(num);
}
void isPalindrome(int num[]){
if(num[0]/100==num[0]%10)
	printf("Number is palindrome");
else
	printf("Number is not palindrome");
}