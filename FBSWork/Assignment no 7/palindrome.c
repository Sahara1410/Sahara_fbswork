#include<stdio.h>
void isPalindrome(int*);
void main()
{
    int num;
	printf("Enter the number:");
	scanf("%d",&num);
	isPalindrome(&num);
}
void isPalindrome(int* num){
if(*num/100==*num%10)
	printf("Number is palindrome");
else
	printf("Number is not palindrome");
}